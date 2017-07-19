/**
* projectEuler Problem 1: Multiples of 3 and 5
*
* Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

int main() {
	int sum = 0;

	for(int i = 3; i <= 1000; i++) {
		if ((i%3 == 0) || (i%5 = 0)) {
			sum += i;
		}
	}

	std::cout << Sum of all mutliples of 3 or 5: << sum << std::endl;

	return EXIT_SUCCESS;
}