//Complex .cpp
#include <iostream>


Complex::Complex() {
	_real = 0;
	_imag = 0;
}

Complex::Complex(double real, double imag) {
	_real = real;
	_imag = imag;
}

Complex::Complex(const Complex &Comp) {
	_real = Comp._real;
	_imag = comp._imag;
}


double Complex::real() {
	return _real;
}

double Complex::imag() {
	return _imag;
}


void Complex::print() {
	std::cout << "real: "  << _real << " imag: " << _imag; << std::endl;
}


