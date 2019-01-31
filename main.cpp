#include <iostream>

#include "include/range.h"

int main() {

	for (auto num : range(10,5,-2))
		std::cout <<  num << std::endl;
}
