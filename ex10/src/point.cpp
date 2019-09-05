/*
 * point.cpp
 *
 *  Created on: Aug 30, 2019
 *      Author: wizard
 */
#include <iostream>
#include "point.hpp"

Point::Point(int x, int y){
	_x = x;
	_y = y;
	_visible = true;
	std::cout<<"Constructor Point"<<std::endl;
}

Point::~Point(){
	std::cout<<"Destructor Point"<<std::endl;
}

void Point::show(){
	std::cout<<"Point ("<<_x<<","<<_y<<")"<<std::endl;
}
//методи за достъп до данните
void Point::setX(int x){
	_x = x;
}

void Point::setY(int y){
	_y = y;
}

void Point::setVisible(bool visible){
	_visible = visible;
}

int Point::getX(){
	return _x;
}

int Point::getY(){
	return _y;
}

bool Point::isVisible(){
	return _visible;
}

//За домашно:
double Point::distance(Point next){
	//Изчислете разстоянието между _x, _y u точката next
	//т.е.
	//Point p1(3,4), p2(6.7)
	// std::cout<<"Distance btw p1 and p2:"<<p1.distance(p2)<<std::endl;
	return 0;
}



