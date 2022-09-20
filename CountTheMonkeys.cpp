#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> MonkeyCount(int n) {

    std::vector<int> v1(n);

    int i = 0;
    std::generate_n(v1.begin(), n, [&]() { i++; return i; });

    return v1;
}

//int main() {
//    std::vector<int> vec = MonkeyCount(10);
//
//    for (auto e : vec) {
//        std::cout << e << std::endl;
//    }
//
//    return 0;
//}