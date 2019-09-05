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
#include "rectangle.hpp"
#include "star.hpp"

int main() {
	Point *p = nullptr;

	p = new Rectangle(10,20,200,300);

	p->show();
	std::cout<<"Shape area:"<<p->area()<<std::endl;
	return 0;
}
