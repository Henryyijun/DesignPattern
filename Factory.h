#ifndef __FACTORY__
#define __FACTORY__
#include <iostream>
#include <string>

/// <summary>
/// 该头文件实现了工厂方法模式!
/// 意图：定义一个创建对象的接口，让其子类自己决定实例化哪一个工厂类，工厂模式使其创建过程延迟到子类进行。
///	主要解决：主要解决接口选择的问题。
///	何时使用：我们明确地计划不同条件下创建不同实例时。
///	如何解决：让其子类实现工厂接口，返回的也是一个抽象的产品。
///	关键代码：创建过程在其子类执行。
/// </summary>
class Shape {
public:
	virtual void draw() = 0;
};

class Rectangle : public Shape {
public:
	virtual void draw() {
		std::cout << "Inside Rectangle::draw() method." << std::endl;
	}
};

class Square : public Shape {
public:
	virtual void draw() {
		std::cout << "Inside Square::draw() method." << std::endl;
	}
};


class Circle : public Shape {
public:
	virtual void draw() {
		std::cout << "Inside Circle::draw() method." << std::endl;
	}
};

//class ShapeFactory {
//public:
//	Shape* getShape(std::string shapeType) {
//		if (shapeType == "Rectangle") {
//			return new Rectangle();
//		} else  if (shapeType == "Circle") {
//			return new Circle();
//		} else if (shapeType == "Square") {
//			return new Square();
//		} else {
//			return nullptr;
//		}
//	}
//};


class Color {
public:
	virtual void fill() = 0;
};

class Red : public Color {
public:
	virtual void fill() {
		std::cout << "Inside Red::fill() method." << std::endl;
	}
};

class Green : public Color {
public:
	virtual void fill() {
		std::cout << "Inside Green::fill() method." << std::endl;
	}
};


class Blue : public Color {
public:
	virtual void fill() {
		std::cout << "Inside Blue::fill() method." << std::endl;
	}
};

//class ColorFactory {
//public:
//	Color* getColor(std::string colorType) {
//		if (colorType == "Red") {
//			return new Red();
//		} else  if (colorType == "Green") {
//			return new Green();
//		} else if (colorType == "bule") {
//			return new bule();
//		} else {
//			return nullptr;
//		}
//	}
//};

#endif // !__FACTORY__
