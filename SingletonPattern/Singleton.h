#pragma once
#ifndef _SINGLETON_H__
#define _SINGLETON_H__

#include <mutex>

class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if (m_pInstance == nullptr)
		{
			m_pLock.lock();
			if (m_pInstance == nullptr)
			{
				m_pInstance = new Singleton();
			}
			m_pLock.unlock();
		}
		return m_pInstance;
	}

	static void Destory()
	{
		if (m_pInstance != nullptr)
		{
			m_pLock.lock();
			if (m_pInstance != nullptr)
			{
				delete m_pInstance;
				m_pInstance = nullptr;
			}
			m_pLock.unlock();
		}
	}

protected:
	virtual ~Singleton() {};

private:
	Singleton() {};
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

private:
	static std::mutex m_pLock;
	static Singleton* m_pInstance;

};

std::mutex Singleton::m_pLock;
Singleton* Singleton::m_pInstance = nullptr;
#endif // !_SINGLETON_H__
