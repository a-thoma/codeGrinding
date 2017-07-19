/********************************************************
* projectEuler Problem 1: Multiples of 3 and 5
*
* Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

int main() {
	
/******************************************************************************
* Note: Fastest way to do this (fastest in terms of writing, not execution)
* is to just sum anything below 1000 that, when mod 3 or mod 5, evaluates to 0.
*
* More efficient way is to use the principal of inclusion and exclusion.
*
* This is done in a way that isn't the most efficient, but explains
* the use of the PIE through the design.
*/

	int divThree   = 3  * ((333 * 334) / 2); // Using (n * (n + 1) / 2).
	int divFive    = 5  * ((199 * 200) / 2);
	int divFifteen = 15 * ((66  *  67) / 2);

	// Sum using PIE, i.e. S = A + B - C.
	int sum = divThree + divFive - divFifteen;

	// Print the sum of all multiples of 3 or 5 below 1000.
	std::cout << "Sum of all mutliples of 3 or 5 below 1000: " << sum << std::endl;

	// We're done.
	return EXIT_SUCCESS;
}