#include <iostream>

int gcd(int a, int b) {

	int c = a / b; // quotient
	int r = a % b; // remainder

	if (r != 0) { // if our remainder isn't zero

		return gcd(b, r); // recurse
	}

	return b; // otherwise we return b, the gcd

}

int main() { // main driver function
	
	int a = 48; // dividend
	int b = 18; // divisor


	// print some information so it makes sense when run
	std::cout << "EXAMPLE OF GCD" << std::endl;
	std::cout << "GCD OF: (" << a << ", " << b << ")" << std::endl;
	std::cout << "GCD: " << gcd(a, b) << std::endl; // call our function and print the result

	// we're done
	return EXIT_SUCCESS;
}