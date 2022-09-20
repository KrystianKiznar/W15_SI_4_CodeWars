#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

int calc(const std::string& x) {
	std::string numbers = "";
	int total1 = 0; int total2 = 0;
	std::string sTotal1{}, sTotal2{};
	std::vector<int> vec1(x.size());

	std::transform(x.begin(), x.end(), vec1.begin(), [](char a) {return a; });
	
	std::for_each(vec1.begin(), vec1.end(), [&](int a) {std::string number = std::to_string(a); numbers += number; });

	sTotal1 = numbers;
	total1 = std::accumulate(sTotal1.begin(), sTotal1.end(), 0, [](int sum, char b) {
		return sum + (int)b; });

	std::replace_if(numbers.begin(), numbers.end(), [](char a) {
		return (a == '7'); }, '1');

	sTotal2 = numbers;
	total2 = std::accumulate(sTotal2.begin(), sTotal2.end(), 0, [](int sum, char b) {
		return  sum + (int)b; });

	return total1 - total2;
}


//int myAccumulate(std::string total) {
//	int counter{};
//	for (auto e : total) {
//		counter += (int)e;
//	}
//	return counter;
//}
//int calc(const std::string& x) {
//	std::string numbers = "";
//	int total1 = 0; int total2 = 0;
//	std::string sTotal1{}, sTotal2{};
//	std::vector<int> vec1(x.size());
//
//	std::transform(x.begin(), x.end(), vec1.begin(), [](char a) {return a; });
//
//	std::for_each(vec1.begin(), vec1.end(), [&](int a) {std::string number = std::to_string(a); numbers += number; });
//
//	sTotal1 = numbers;
//	total1 = myAccumulate(sTotal1);
//
//	std::replace_if(numbers.begin(), numbers.end(), [](char a) {
//		return (a == '7'); }, '1');
//
//	sTotal2 = numbers;
//	total2 = myAccumulate(sTotal2);
//
//	return total1 - total2;
//}

int main() {
	std::cout << calc("AabB");
	return 0;
}