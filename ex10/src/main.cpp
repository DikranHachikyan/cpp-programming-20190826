//============================================================================
// Name        : ex01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

#include "array.hpp"


int main() {
	Array arr(5);

	for( int i = 0 ; i < arr.size(); i++){
		arr.add(i * i);
	}

	arr.print();
	//arr.add(222);
	if( ! arr.add(100)){
		std::cout<<"The array is full ("<<arr.size()<<")"<<std::endl;
	}
	arr.print();
	return 0;
}
