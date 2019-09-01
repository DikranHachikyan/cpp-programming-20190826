/*
 * array.cpp
 *
 *  Created on: Aug 30, 2019
 *      Author: wizard
 */
#include <iostream>
#include "array.hpp"


Array::Array(int size){
	_data = new int[size]; // заделяме памет за size елемента
	_size = size;
	_current = 0;
}

Array::~Array(){
	delete [] _data;
}

int Array::size(){
	return _size;
}

bool Array::add(int element){

	if( _current >= _size ) return false;

	_data[_current] = element;
	_current++;
	return true;
}

void Array::print(){
	for( int i = 0 ; i < _current ; i++){
		std::cout<<_data[i]<<"|";
	}
	std::cout<<std::endl;
}
