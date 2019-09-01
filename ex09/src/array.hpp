/*
 * array.hpp
 *
 *  Created on: Aug 30, 2019
 *      Author: wizard
 */

#ifndef ARRAY_HPP_
#define ARRAY_HPP_

class Array{
	private:
		int *_data;
		int _size;
		int _current;

	public:
		Array(int size);
		~Array();
		//размер на масива
		int size();
		//добавя елемент към масива
		bool add(int element);
		//извежда елементите на масива
		void print();

		//За домашно:
		//asc = true - възходящ ред
		//asc = false - низходящ ред
		void sort(bool asc);
		//минимална стойност
		int min();
		//максимална стойност в масива
		int max();
		//средно аритметично
		float avg();
		//сума на елементите
		int sum();
};



#endif /* ARRAY_HPP_ */
