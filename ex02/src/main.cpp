//============================================================================
// Name        : ex01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>


int main() {
	int value = 0;

	std::cout << "Hello C++!" << std::endl;

	std::cout << "value=";
	std::cin >> value;
	std::cout << "value=" << std::pow(value,2) << std::endl;

	return 0;
}
