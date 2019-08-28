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
	private:
	   //данни на класа
		int _x;
		int _y;

	public:
		//Конструктор на класа
		Point(int x, int y){
			_x = x;
			_y = y;
			std::cout<<"Constructor Point"<<std::endl;
		}
		//методи на класа
		void show(){
			std::cout<<"Point ("<<_x<<","<<_y<<")"<<std::endl;
		}
};

int main() {

	Point p1(5,7);

	std::cout<<"start"<<std::endl;
	//данните са private и нямаме директен достъп до тях
	//p1.x = 1000;
	//p1.y = -20;

	p1.show();

	std::cout<<"end"<<std::endl;
	return 0;
}
