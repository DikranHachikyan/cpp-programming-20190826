/*
 * star.hpp
 *
 *  Created on: Sep 5, 2019
 *      Author: wizard
 */

#ifndef STAR_HPP_
#define STAR_HPP_

#include "point.hpp"

class Star: public Point {
public:
	Star();
	virtual ~Star();
	virtual void show();
};

#endif /* STAR_HPP_ */
