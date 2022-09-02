﻿// DesignPattern.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "AbstractFactory.h"

#include <iostream>
using namespace std;


int main() {
    /*ShapeFactory factory;
    Shape* shape1 = factory.getShape("Rectangle");
    shape1->draw();

    Shape* shape2 = factory.getShape("Circle");
    shape2->draw();

    Shape* shape3 = factory.getShape("Square");
    shape3->draw();*/

    /*
    * 抽象工厂模式
    */
    AbstracFactory* shapeFactory = FactoryProducer::getFactory("Shape");
    Shape* shape1 = shapeFactory->getShape("Circle");
    shape1->draw();

    AbstracFactory* colorFactory = FactoryProducer::getFactory("Color");
    Color* color1 = colorFactory->getColor("Red");
    color1->fill();
}


