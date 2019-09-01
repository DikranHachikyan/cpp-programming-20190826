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

int main() {
	Point *p = nullptr;

	std::cout<<"start"<<std::endl;
	p = new Point(4,7);

	p->show();

	p->setX(10);
	p->setY(12);

	p->show();

	delete p;
	std::cout<<"end"<<std::endl;
	return 0;
}
