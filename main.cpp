#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <ranges>


//8 fibonacci
long
fibonacci_number(long fib_num);
//for 4th problem
void print(auto rem, const auto& v)
{
	for(std::cout << rem; const auto & x :v)
		std::cout << x << ' ';
	std::cout << '\n';
}

//for extended 4th problem
auto print_my(auto rem, const auto& v) -> void
{
	for(std::cout << rem; const auto& x : v)
		std::cout << x << ' ';
	std::cout << '\n';
}

int 
max_val(std::vector<int> my_array, std::size_t size)
{
	int maxVal = my_array[0];
	for(size_t i {0};i<size;++i)
	{
		if(my_array[i] > maxVal)
		{
			maxVal = my_array[i];
		}
	}
	return maxVal;
}


auto main() -> int
{	
	//1
	// for (int i = 1; i <= 20; ++i)
	// {
	// 	/* code */
	// 	std::cout << i << "\n";
	// }


	//2
	// for (int i = 3; i < 29; i+=2)
	// {
	// 	/* code */
	// 	std::cout << i << "\n";
	// }

	//3

	// for (int i = 50; i > 20; --i)
	// {
	// 	if(i %3==0)
	// 			std::cout << i << "\n";
	// }

	//4

	
	// std::partition, std::partition_copy

	// std::vector<int> unsorted_n {2, 3, 13, 18, -5, 38, -10, 11, 0, 104};
	// std::vector<int> _pos_nums;
	// std::vector<int> _neg_nums;

	// //1st version
	// std::ranges::partition_copy(std::begin(unsorted_n), std::end(unsorted_n),
	// 	std::back_inserter(_pos_nums), std::back_inserter(_neg_nums), [](int i) { return i >= 0; } );


	//2nd version
	// for(int __filter : unsorted_n)
	// 	if( __filter >= 0)
	// 		_pos_nums.push_back(__filter);
	// 	else
	// 		_neg_nums.push_back(__filter);

	// print(" :: ", _pos_nums);
	// print(" => ", _neg_nums);

	//4 extended for %2==0 and not 0
	// std::vector<int> unsorted_n {2, 3, 13, 18, -5, 38, -10, 11, 0, 104};

	// std::vector<int> can_divided {};
	// std::vector<int> cant_divided {};

	// std::ranges::partition_copy(std::begin(unsorted_n), std::end(unsorted_n), 
	// 	std::back_inserter(can_divided), std::back_inserter(cant_divided), 
	// 		[](int i) {return i %2==0;});

	// print_my("divisible by 2 => ", can_divided);
	// print_my("not divisible by 2 => ", cant_divided);

	//5
	//1st version without looping:)

	// std::vector<int> max_number = {1,2,5,-6, 9,10};
	// 	int get_maxNum = *std::max_element(max_number.begin(), max_number.end());
	// std::cout << "max value " << get_maxNum << '\n';

	//2
	// std::vector<int> max_number = {1,2,5,-6, 9,10};
	// std::cout << std::ranges::max(max_number) << '\n';
	//even better :)

	//7 come back to 6th problem lol
	// int reverse_sorting[3][3] = {{0, 1, 0}, {0, 1,0}, {1,0,1}};
	// int counter {};

	// for(auto& row : reverse_sorting)
	// {	
	// 	for(auto value : row)
	// 	{
	// 		std::cout << value << ' ';
	// 		if(value ==0)
	// 		{
	// 			counter++;
	// 		}
	// 	}
	// 	std::cout << '\n';
	// }
	// std::cout << "total => "<< counter << '\n';

	//6
	//6th problem is hard enough to do in c++

	// std::vector<int> numbers = {1,2,3,4,5,-5,-4,10,9};

	// std::sort(numbers.begin(), numbers.end(), std::greater());
	// for(auto sorted_n : numbers)
	// 	std:: cout << sorted_n << ' ';
	// std::cout << '\n';

	//8

	//fibonacci
	long res = fibonacci_number(20);
	std::cout << res << '\n';
	return 0;
}

long
fibonacci_number(long fib_num)
{
	if(fib_num==0)
		return 0;
	if(fib_num==1)
		return 1;
	return fibonacci_number((fib_num-1) + (fib_num-2));
}