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
	Array a1(10);
	Array a2(10);

	for( int i = 0 ; i < 5; i++ ){
		a1.add( i * i );
	}

	for( int i = 0 ; i < 14; i++ ){
		a2.add( i * 100 );
	}
	a1.print();
	a2.print();

	if( !a1.add(a2)){
		std::cout<<"a1 is full"<<std::endl;
	}
	a1.print();
	return 0;
}
