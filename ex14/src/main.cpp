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

int main() {
	Point *p = nullptr;

	p = new Rectangle(10,20,310,201);

	p->show();

	delete p;

	return 0;
}
