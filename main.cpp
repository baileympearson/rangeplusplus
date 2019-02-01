#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <iterator>

#include "include/range.h"
#include "include/functional.h"

#include <algorithm>

std::mutex m;

int main() {
	std::vector<int> v = {1,2,3,4,5};

	auto pred = [](int i) { return i % 2 != 0; };

	auto v1 = functional::filter(v,pred);

	auto isEven = [](auto i) {
		return i % 2 == 0;
	};

	auto v3 = functional::filter(functional::map(v,[](auto i) { return i * i; }),isEven);

	for (auto item : v3)
		std::cout <<  item << std::endl;

	std::vector<int> v5{1,2,3,4,5};

}
