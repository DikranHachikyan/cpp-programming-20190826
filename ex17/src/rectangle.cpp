/*
 * Rectangle.cpp
 *
 *  Created on: Sep 4, 2019
 *      Author: wizard
 */
#include <iostream>
#include "rectangle.hpp"

Rectangle::Rectangle(int x, int y, int width, int height):
		Point(x,y){

	_width = width;
	_height = height;
	std::cout<<"Const. Rectangle"<<std::endl;
}

Rectangle::~Rectangle() {
	std::cout<<"Destr. Rectangle"<<std::endl;
}

void Rectangle::show(){
	Point::show();
	std::cout<<"Rectangle ["<<_width<<","<<_height<<"]"<<std::endl;
}

int Rectangle::area(){
	return _height * _width;
}
