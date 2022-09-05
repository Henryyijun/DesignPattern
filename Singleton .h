#pragma once


/*
* ����ģʽ��Singleton Pattern���� Java ����򵥵����ģʽ֮һ���������͵����ģʽ���ڴ�����ģʽ�����ṩ��һ�ִ����������ѷ�ʽ��
*	��ͼ����֤һ�������һ��ʵ�������ṩһ����������ȫ�ַ��ʵ㡣
	��Ҫ�����һ��ȫ��ʹ�õ���Ƶ���ش��������١�
	��ʱʹ�ã����������ʵ����Ŀ����ʡϵͳ��Դ��ʱ��
	��ν�����ж�ϵͳ�Ƿ��Ѿ������������������򷵻أ����û���򴴽���
	�ؼ����룺���캯����˽�еġ�
*/
/*
����ʽ ����ģʽ1
�Ƿ���̰߳�ȫ����
ʵ���Ѷȣ���
*/
class Singleton {
private:
	static Singleton* instance;
	Singleton() {}

public:
	static Singleton* getInstance() {
		if (instance == nullptr) {
			instance = new Singleton();
		}
		return instance;
	}
};

Singleton* Singleton::instance = nullptr;

//����ʵ�����̲߳���ȫ�� 

//class Singleton {
//public:
//	static Singleton& getInstance()  {
//		static Singleton instance;
//		return instance; 
//	}      
//private:     
//	Singleton(){};     
//	Singleton(const Singleton&);     
//	Singleton& operator = (const Singleton&); 
//};