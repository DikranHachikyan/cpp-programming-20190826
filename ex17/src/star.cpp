/*
 * star.cpp
 *
 *  Created on: Sep 5, 2019
 *      Author: wizard
 */
#include <iostream>
#include "star.hpp"

Star::Star() {
	std::cout<<"Constr.Star"<<std::endl;

}

Star::~Star() {
	std::cout<<"Destr.Star"<<std::endl;
}

void Star::show(){
	std::cout<<"Draw a star"<<std::endl;
}
