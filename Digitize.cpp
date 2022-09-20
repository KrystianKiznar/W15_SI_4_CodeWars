#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<int> digitize(const int& n) {
	std::string numbers = std::to_string(n);
	std::vector<int> vec1(numbers.size());

	std::transform(numbers.begin(), numbers.end(), vec1.begin(),
		[](char a) {
			return a-48; });

	return vec1;
}

//int main() {
//	std::vector<int> test;
//
//	test = digitize(123);
//
//	for (int e : test) {
//		std::cout << e << std::endl;
//	}
//	return 0;
//}