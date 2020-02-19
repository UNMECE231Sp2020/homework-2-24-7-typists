#include <iostream>
#include "complex.hpp"

int main() {
	Complex c1;
	c1.print();

	Complex c2(1.0);
	c2.print();

	Complex c3(3.0, 4.0);
	c3.print();

	Complex c4(5.0, 12.0);

	std::cout << std::endl;

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
	Complex c5 = c3.cconj();
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


	/*
	std::cout << "Testing overloaded operators" << std::endl;

	std::cout << c3 + c4 << std::endl;
	std::cout << c4 - c3 << std::endl;
	std::cout << c3 * c4 << std::endl;
	std::cout << c3 / c4 << std::endl;
	*/
	return 0;
}
