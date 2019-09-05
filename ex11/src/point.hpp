/*
 * point.hpp
 *
 *  Created on: Aug 30, 2019
 *      Author: wizard
 */

#ifndef POINT_HPP_
#define POINT_HPP_

//клас представляваш точка в равнина
class Point {
	private:
	   //данни на класа
		int _x;
		int _y;
		bool _visible;

	public:
		//Конструктор на класа
		Point(int, int);
		//презареждане (overloading)
		Point();
		//Деструктор на класа
		~Point();
		//методи на класа
		void show();
		//методи за достъп до данните
		void setX(int x);
		void setY(int y);
		void setVisible(bool visible);
		int getX();
		int getY();
		bool isVisible();
		//За домашно:
		double distance(Point next);
};



#endif /* POINT_HPP_ */
