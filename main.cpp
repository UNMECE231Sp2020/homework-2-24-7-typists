#include <iostream>
#include "complex.hpp"

int main() {
	//Initialize some Complex number for testing
	Complex c1;
	c1.print();

	Complex c2(1.0);
	c2.print();

	Complex c3(3.0, 4.0);
	c3.print();

	Complex c4(5.0, 12.0);

	std::cout << std::endl;

	//Test all the functions in class Complex one at a time
	c1=c3.add(c4);
	c1.print();
	std::cout << "Should be 8 + 16j\n" << std::endl;
	
	c2=c3.sub(c4);
	c2.print();
	std::cout << "Should be -2 - 8j\n" << std::endl;

	c1 = c3.mult(c4);
	c1.print();
	std::cout << "Should be -33 + 56j\n" << std::endl;

	c2 = c3.div(c4);
	c2.print();
	std::cout << "Should be 0.372791 - 0.0946746j\n" << std::endl;

	//Complex conjugate
	Complex c5 = c3; //copy constructor
	c5.print();
	c5 = c3.cconj();
	std::cout << "Complex conjugate: ";
	c5.print();
	std::cout << std::endl;

	//Magnitude
	std::cout << "Magnitude: " << c3.magnitude() << " should be 5" << std::endl;
	std::cout << "Magnitude: " << c4.magnitude() << " should be 13" << std::endl;
	std::cout << std::endl;

	//Phase
	std::cout << "Phase: " << c3.phase() << " should be 53.1301" << std::endl;
	std::cout << "Phase: " << c4.phase() << " should be 67.3801" << std::endl;
	std::cout << std::endl;

	//Divide by zero check
	Complex c6;
	Complex c7 = c3.div(c6);//divide 3+j4 by 0 +j0
	c7.print();
	std::cout << std::endl;

	//90 degree phase check
	Complex c8(0, 8.0);
	Complex c9 = c8.phase();
	c9.print();
	std::cout << std::endl;

	//check phase of 0 + j0
	Complex c10 = c6.phase();
	c10.print();
	std::cout << std::endl;


	//Test overloaded operators
	std::cout << "Testing overloaded operators" << std::endl;
	std::cout << c3 + c4 << std::endl;
	std::cout << c4 - c3 << std::endl;
	std::cout << c3 * c4 << std::endl;
	std::cout << c3 / c4 << "\n" << std::endl;
	
	//Test for assignment operator
	Complex c11;
	Complex c12(27.0, 27.0);
	c11 = c12;
	c11.print();
	std::cout << std::endl;

	//Test input of a complex number
	std::cout << "Please enter a complex number seperated by a space" << std::endl;
	std::cin >> c1;
	std::cout << "You entered: " << std::endl;
	std::cout << c1 << std::endl;

	//Test getter functions
	std::cout << "\nTesting getter function" << std::endl;
	c1.print();
	std::cout << "Real part: " << c1.real() << std::endl;
	std::cout << "Imaginary part: " << c1.imag() << std::endl;

	return 0;
}
