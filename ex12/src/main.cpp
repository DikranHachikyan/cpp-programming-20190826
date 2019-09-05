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

	Point p1(10,10);
	Point p2;
	Point p3;

	Point *p = &p1;
	p1.show();
	p2.show();
	p3.show();
	return 0;
}
