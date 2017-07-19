/*******************************************************************
* projectEuler problem 2: Even Fibonacci numbers below four million.
*
* Find the sum of all the even numbers in the Fibonacci sequence
* below four million.
*/

#include <iostream>

int main() {

	int sum  = 0; // Running sum
	int fOne = 0; // Old fib number
	int fTwo = 1; // New/next fib number

	while (fTwo < 4000000) {     // Anything below four million
		if (fTwo%2 == 0) {       // If it's even...
			sum += fTwo;         // Add to our total
		}
			fOne = fTwo;         // New value becomes old value
			fTwo = fTwo + fOne;  // Update new value
	}

	// Print the sum
	std::cout << "Sum of all even numbers below four million: " << sum << std::endl;

	// We're done
	return EXIT_SUCCESS;
}