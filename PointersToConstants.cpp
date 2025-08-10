#include <iostream>

int main()
{
	//code here
	// int a = 10;
	// const int *pa = &a;

	// std::cout << "address pa " << pa << "\tvalue pa " << *pa << std::endl;
	// a = 22;
	// std::cout << "address pa " << pa << "\tvalue pa " << *pa << std::endl;
	// return 0;

	// const int a = 10;
	// const int *pa = &a;
	// const int b = 45;

	// pa = &b;

	// std::cout << "*pa" << *pa << std::endl;
	// std::cout << "a" << a << std::endl;

	/*Константный указатель*/

	// int a = 10;
	// int *const pa = &a;
	// std::cout << *pa << std::endl;

	// *pa = 22;
	// std::cout << *pa << std::endl;

	/*Константный указатель на константу*/

	int a = 10;
	const int *const pa = &a;

	std::cout << *pa;
	*pa = 22;
	// std::cout << *pa; /*you can not declare it as it is constant /*
	return 0;

	//next topic
	//Указатели и массивы
}