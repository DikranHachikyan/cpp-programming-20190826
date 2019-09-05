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
		int _max_size;

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

		void ensureCapacity( int);

		//За домашно (02.09.2019):
		//добавя стойностите от масива other към края на масива
		//bool add(Array &other);

		//сумира елементите от индекс from до индекс to
		//int sum(int from, int to);
};



#endif /* ARRAY_HPP_ */
