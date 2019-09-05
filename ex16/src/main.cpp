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
	Point *sh[] = {
			new Point(7,8),
			new Rectangle(10,20,100,200),
			new Star(),
			new Point(11,23),
			new Rectangle(33,44,500,400)
	};
	std::cout<<std::endl;
	for( int i = 0; i < 5; i++){
		sh[i]->show();
		std::cout<<"----"<<std::endl;
	}
	std::cout<<std::endl;
	for( int i = 0 ; i < 5; i++ ){
		delete sh[i];
	}
	return 0;
}
