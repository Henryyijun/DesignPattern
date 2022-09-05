#pragma once


/*
* 单例模式（Singleton Pattern）是 Java 中最简单的设计模式之一。这种类型的设计模式属于创建型模式，它提供了一种创建对象的最佳方式。
*	意图：保证一个类仅有一个实例，并提供一个访问它的全局访问点。
	主要解决：一个全局使用的类频繁地创建与销毁。
	何时使用：当您想控制实例数目，节省系统资源的时候。
	如何解决：判断系统是否已经有这个单例，如果有则返回，如果没有则创建。
	关键代码：构造函数是私有的。
*/
/*
懒汉式 单例模式1
是否多线程安全：否
实现难度：易
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

//代码实例（线程不安全） 

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