#pragma once
/// 抽象工厂模式（Abstract Factory Pattern）是围绕一个超级工厂创建其他工厂。
/// 该超级工厂又称为其他工厂的工厂。这种类型的设计模式属于创建型模式，它提供了一种创建对象的最佳方式。
/// 
/// ----介绍-----
/// 意图：提供一个创建一系列相关或相互依赖对象的接口，而无需指定它们具体的类。
/// 主要解决：主要解决接口选择的问题。
/// 何时使用：系统的产品有多于一个的产品族，而系统只消费其中某一族的产品。
/// 如何解决：在一个产品族里面，定义多个产品。
/// 关键代码：在一个工厂里聚合多个同类产品。
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