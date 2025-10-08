// hm3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <iostream>

auto main() -> int
{
	//1
	//a)
	/*for (size_t a = 20; a < 35; ++a)
	{
		std::cout << a << "\n";
	}*/

	//b)
	/*std::cout << "enter number greater than or equal to 10\n";

	size_t b{};
	std::cin >> b;
	for (size_t i = 10; i <= b; ++i)
	{
		std::cout << i << '\n';
	}*/

	//2.
	//v)

	//std::cout << "enter number less than 50 pls\n";
	//int power_of_two {};
	//std::cin >> power_of_two;

	//for (size_t i = power_of_two; i <= 50; ++i)
	//{
	//	//power * power;
	//	std::cout << i << " :: " << 
	//		i * i << '\n';
	//}

	//g)
	//from a to b;

	/*std::cout << "enter a number which should start from\n";
	int a{};
	std::cin >> a;

	std::cout << "enter a number which should end at\n";
	int b{};
	std::cin >> b;

	for (size_t i = a; i <= b; ++i)
		std::cout << i << '\n';*/

	//3.
	//a)

	/*double a{ 10 };
	for (double i = a; i <= 15; ++i)
		std::cout << i << " :: " << i + 0.4 << '\n';*/

	//b)
	/*for (size_t i = 25; i < 35; i++)
	{
		std::cout << i << " :: " << static_cast<double>(i + 0.5)
			<< " :: " << static_cast<double>(i - 0.2) << '\n';
	}*/

	//4.

	//a)
	/*for (size_t i = 21; i >= 10; i--)
	{
		std::cout << i << " :: " 
			<< static_cast<double>(i - 1.8) << '\n';
	}*/
	//b)

	/*for (size_t i = 45; i >= 25; i--)
	{
		std::cout << i << " :: "
			<< static_cast<double>(i - 0.5)
			<< " :: " << static_cast<double>(i - 0.8) << '\n';
	}*/

	//5.
	//a)
	/*for (size_t i = 21; i <= 35; i++)
	{
		std::cout << i << " :: " <<
			static_cast<double>(i - 0.6) << '\n';
	}*/

	//b)

	/*for (size_t i = 16; i <= 24; i++)
	{
		std::cout << i << " :: " << static_cast<double>(i - 0.5) << " :: "
			<< static_cast<double>(i + 0.8) << '\n';
	}*/

	//6.
	/*double product{ 20.4 };
	for (size_t i = 2; i <= 20; i++)
	{
		std::cout << i <<  " :: " << product * i << '\n';
	}*/

	//7
	
	// for (size_t i = 1; i <= 10; i++)
	// {
	// 	double kg = i * 0.453;
	// 	std::cout << i << " pound == " << std::fixed << std::setprecision(3)
	// 		<< kg << " kg\n";
	// }
	
	//8
	//1d = 25.4
	//1sm =10mm
	//1mm = 1/10 cm
	//1d = 25.4 * 1/10 = 2.54;

	// for (size_t i = 10; i <= 22; i++)
	// {
	// 	double d =  { i * 2.54 };
	// 	std::cout << i << " d == " << std::fixed << std::setprecision(3) << d << "cm\n"; 
	// }

	//9
	//1 dollar = 82.07 rubl
	
	// std::cout << "enter value : \n";
	// double exchange { };
	// std::cin >> exchange;

	// for (size_t i = 1; i <= 20; i++)
	// {
	// 	double result = exchange * i;
	// 	std::cout << i << " dollars => " << 
	// 		std::fixed << std::setprecision(2) <<
	// 			result << " rubls\n";
	// }
	
	//11
	// short _table {};
	// for (int i = 1; i <= 9; ++i)
	// {
	// 	std::cout << i << " X 7 => " << i * 7 << std::endl;
	// }

	//12
	// short _table9 {};
	// for (int i = 1; i <= 9; ++i)
	// {
	// 	std::cout << "9 X " << i << " => " << i * 9 << std::endl;
	// }

	//13

	// std::cout << "enter N \n";
	// short _table_n {};

	// std::cin >> _table_n;
	// for (int i = 1; i <= 9; ++i)
	// {
	// 	std:: cout << _table_n << " X " << i <<
	// 		" => " << i*_table_n << std::endl;
	// }

	//14
	// for (double i = 0.1; i < 0.9; i+=0.1)
	// {
	// 	std::cout << i << std::endl;
	// }

	//15
	//1kg cheese = 20 dollars;
	//1kg = 1000gg
	//1gg = 1/1000kg * 20dollars

	// std::cout << "enter value for the chees my master :) \n";

	// double price {};
	// std::cin >> price;

	// for (int i = 50; i <= 1000; i+=50)
	// {
	// 	std::cout << i << " gramms of cheese => "
	// 		<< (i/1000.0) * price  << " dollars " << std::endl; 
	// }


	//16
	// std::cout << "enter value for the chocolate my master :) \n";

	// short _price {};
	// std::cin >> _price;

	// for (int i = 100; i <= 2000; i+=100)
	// {
	// 	//1kg = 20dollars
	// 	//1kg = 1000gg;
	// 	//1gg = (1/1000) * 20;

	// 	std::cout << i << " gramms of chocolate cost :: " << 
	// 		(i/1000.0) * _price << std::endl;
	// }

	//17

	// for (double i = 2.1; i < 2.9; i+=0.1)
	// {
	// 	std::cout << i << std::endl;
	// }

	//18
	// double _val { 3.2 };

	// while (_val < 4.0)
	// {
	// 	std::cout << _val << std::endl;
	// 	std::cout << _val << std::endl;
	// 	_val+= 0.1;
	// }

	//19
	// for (double i = 2.2; i < 4.4; i+= 0.2)
	// {
	// 	std::cout << i << std::endl;
	// }

	//20
	for (double i = 4.4; i < 6.6; i+=0.2)
	{
		/* code */
		std::cout << i << std::endl;
	}
}

