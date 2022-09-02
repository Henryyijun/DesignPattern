#pragma once
/// ���󹤳�ģʽ��Abstract Factory Pattern����Χ��һ������������������������
/// �ó��������ֳ�Ϊ���������Ĺ������������͵����ģʽ���ڴ�����ģʽ�����ṩ��һ�ִ����������ѷ�ʽ��
/// 
/// ----����-----
/// ��ͼ���ṩһ������һϵ����ػ��໥��������Ľӿڣ�������ָ�����Ǿ�����ࡣ
/// ��Ҫ�������Ҫ����ӿ�ѡ������⡣
/// ��ʱʹ�ã�ϵͳ�Ĳ�Ʒ�ж���һ���Ĳ�Ʒ�壬��ϵͳֻ��������ĳһ��Ĳ�Ʒ��
/// ��ν������һ����Ʒ�����棬��������Ʒ��
/// �ؼ����룺��һ��������ۺ϶��ͬ���Ʒ��
/// 
#include <string>

#include "Factory.h"


class AbstracFactory {
public:
	virtual Shape* getShape(std::string shapeType) = 0;
	virtual Color* getColor(std::string ColorType) = 0;
};

class ShapeFactory : public AbstracFactory {
public:
	Shape* getShape(std::string shapeType) {
		if (shapeType == "Rectangle") {
			return new Rectangle();
		} else  if (shapeType == "Circle") {
			return new Circle();
		} else if (shapeType == "Square") {
			return new Square();
		} else {
			return nullptr;
		}
	}

	Color* getColor(std::string ColorType) {
		return nullptr;
	}
};


class ColorFactory : public AbstracFactory {
public:
	Color* getColor(std::string colorType) {
		if (colorType == "Red") {
			return new Red();
		} else  if (colorType == "Green") {
			return new Green();
		} else if (colorType == "bule") {
			return new Blue();
		} else {
			return nullptr;
		}
	}

	Shape* getShape(std::string shapeType) {
		return nullptr;
	}

};

class FactoryProducer {
public:
	static AbstracFactory* getFactory(std::string choice) {
		if (choice == "Shape") {
			return new ShapeFactory();
		} else if (choice == "Color") {
			return new ColorFactory();
		} else {
			return nullptr;
		}
	}
};