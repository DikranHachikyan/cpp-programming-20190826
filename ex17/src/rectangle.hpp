/*
 * Rectangle.h
 *
 *  Created on: Sep 4, 2019
 *      Author: wizard
 */

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

#include "point.hpp"

class Rectangle: public Point {
	private:
		int _width;
		int _height;
	public:
		Rectangle(int x=0, int y=0, int width=0, int height=0);
		virtual ~Rectangle();

		//Method Override
		virtual void show();
		virtual int area();
};

#endif /* RECTANGLE_HPP_ */
