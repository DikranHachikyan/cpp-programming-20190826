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
		bool _visible;

	public:
		//Конструктор на класа
		Point(int x, int y){
			_x = x;
			_y = y;
			_visible = true;
			std::cout<<"Constructor Point"<<std::endl;
		}

		//Деструктор на класа
		~Point(){
			std::cout<<"Destructor Point"<<std::endl;
		}
		//методи на класа
		void show(){
			std::cout<<"Point ("<<_x<<","<<_y<<")"<<std::endl;
		}
		//методи за достъп до данните
		void setX(int x){
			_x = x;
		}

		void setY(int y){
			_y = y;
		}

		void setVisible(bool visible){
			_visible = visible;
		}

		int getX(){
			return _x;
		}

		int getY(){
			return _y;
		}

		bool isVisible(){
			return _visible;
		}

		//За домашно:
		double distance(Point next){
			//Изчислете разстоянието между _x, _y u точката next
			//т.е.
			//Point p1(3,4), p2(6.7)
			// std::cout<<"Distance btw p1 and p2:"<<p1.distance(p2)<<std::endl;
			return 0;
		}
};

int main() {

	Point p1(5,7);

	std::cout<<"start"<<std::endl;
	//данните са private и нямаме директен достъп до тях
	//p1.x = 1000;
	//p1.y = -20;

	p1.show();

	p1.setX(25);
	p1.setY(30);

	if ( p1.isVisible()){
		p1.show();
	}
	std::cout<<"end"<<std::endl;
	return 0;
}
