//============================================================================
// Name        : ex01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

//клас представляваш точка в равнина
class Point {
	public:
		//данни на класа
		int x;
		int y;

		//методи на класа
		void show(){
			std::cout<<"Point ("<<x<<","<<y<<")"<<std::endl;
		}
};

int main() {
	//Point - клас
	//p1,p2 - обекти, представители на класа
	Point p1, p2;

	p1.x = 10;
	p1.y = 20;


	p2.x = 5;
	p2.y = 1;

	p1.show();
	p2.show();

	return 0;
}
