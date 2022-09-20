#include <iostream>
#include <vector>
#include <numeric>

int positive_sum(const std::vector<int> arr) {
	return std::accumulate(arr.begin(), arr.end(), 0, [](int sum, int b) {
		if (b > 0)
			return sum + b;
		else 
			return sum; 
		});															
}

//int main() {
//
//	int test = positive_sum({3,5,7});
//	std::cout << test;
//	return 0;
//}
