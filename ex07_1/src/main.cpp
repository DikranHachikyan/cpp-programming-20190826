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

void foo(){
	Point p1(5,7);

	p1.show();

	p1.setX(25);
	p1.setY(30);

	if ( p1.isVisible()){
		p1.show();
	}
}

int main() {

	std::cout<<"start"<<std::endl;

	foo();

	std::cout<<"end"<<std::endl;
	return 0;
}
