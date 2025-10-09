#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>


auto print_my(auto rem, const auto& v) -> void
{
	for(std::cout << rem; const auto& x : v)
		std::cout << x << ' ';
	std::cout << '\n';
}
auto main() -> int
{
	std::vector<int> unsorted_n {2, 3, 13, 18, -5, 38, -10, 11, 0, 104};

	std::vector<int> can_divided {};
	std::vector<int> cant_divided {};

	std::ranges::partition_copy(std::begin(unsorted_n), std::end(unsorted_n), 
		std::back_inserter(can_divided), std::back_inserter(cant_divided), 
			[](int i) {return i %2==0;});

	print_my("divisible by 2 => ", can_divided);
	print_my("not divisible by 2 => ", cant_divided);

	return 0;
}
