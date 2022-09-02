#ifndef __FACTORY__
#define __FACTORY__
#include <iostream>
#include <string>

/// <summary>
/// ��ͷ�ļ�ʵ���˹�������ģʽ!
/// ��ͼ������һ����������Ľӿڣ����������Լ�����ʵ������һ�������࣬����ģʽʹ�䴴�������ӳٵ�������С�
///	��Ҫ�������Ҫ����ӿ�ѡ������⡣
///	��ʱʹ�ã�������ȷ�ؼƻ���ͬ�����´�����ͬʵ��ʱ��
///	��ν������������ʵ�ֹ����ӿڣ����ص�Ҳ��һ������Ĳ�Ʒ��
///	�ؼ����룺����������������ִ�С�
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
