//============================================================================
// Name        : ex01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

#include "point.hpp"

void display( Point &pnt){
	pnt.show();
	pnt.setX(120);
	pnt.setY(230);
}

int main() {
	Point p1(10,20);

	std::cout<<"start"<<std::endl;

	display(p1);
	p1.show();
	std::cout<<"end"<<std::endl;
	return 0;
}
