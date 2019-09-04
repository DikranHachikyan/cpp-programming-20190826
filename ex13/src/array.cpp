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
	_max_size = _size * 2;
}

Array::~Array(){
	delete [] _data;
}

int Array::size(){
	return _size;
}

bool Array::add(int element){

	if( _current >= _max_size) return false;

	if( _current >= _size ){
		ensureCapacity(_current +1);
	}

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

void Array::ensureCapacity( int minCapacity){
	if( minCapacity <= _size ) return;
	//разширяваме масива
	int *tmp = new int[minCapacity];

	//прехвърляме старите елементи на новото място
	for( int i = 0 ; i < _current; i++){
		tmp[i] = _data[i];
	}
	//освобождаваме паметта заета от старите елементи!!!
	delete [] _data;

	_data = tmp;
	_size = minCapacity;
}
