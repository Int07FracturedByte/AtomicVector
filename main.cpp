#include "AtomicInt.h"
#include <iostream>

int main() {
	std::vector<AtomicInt> Vec;

	Vec.push_back(0);
	Vec.push_back(1);
	Vec.push_back(2);
	Vec[1] = -1;

	for (auto v: Vec){
		std::cout << v << " ";
	}

	return 0;
}