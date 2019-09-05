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
		Point(int x = 0, int y = 0);
		//Деструктор на класа
		virtual ~Point();
		//методи на класа
		virtual void show();

		//методи за достъп до данните
		void setX(int x);
		void setY(int y);
		void setVisible(bool visible);
		int getX();
		int getY();
		bool isVisible();
		//За домашно:
		double distance(Point &next);
		virtual int area();
};



#endif /* POINT_HPP_ */
