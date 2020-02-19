//complex .cpp
#include <iostream>
#include "complex.hpp"
#include <cmath>


Complex::Complex() {
	_real = 0;
	_imag = 0;
}

Complex::Complex(double real, double imag) {
	_real = real;
	_imag = imag;
}

Complex::Complex(double real) {
	_real = real;
	_imag = 0;
}

Complex::Complex(const Complex &Comp) {
	_real = Comp._real;
	_imag = Comp._imag;
}


double Complex::real() {
	return _real;
}

double Complex::imag() {
	return _imag;
}


void Complex::print() {
	std::cout << "real: "  << _real << " imag: " << _imag << std::endl;
}


Complex Complex::add(Complex one) {
	Complex comp_add;
	comp_add._real = _real + one._real;
	comp_add._imag = _imag + one._imag;
	return comp_add;
}

Complex Complex::sub(Complex two) {
	Complex comp_sub;
	comp_sub._real = _real - two._real;
	comp_sub._imag = _imag - two._imag;
	return comp_sub;
}

Complex Complex::mult(Complex three) {
	Complex comp_mult;
	comp_mult._real = (_real*three._real) - (_imag*three._imag);
	comp_mult._imag = (_real*three._imag) + (_imag*three._real);
	return comp_mult;
}

Complex Complex::div(Complex four) {
	Complex comp_div;
	double denom = pow(four._real,2) + pow(four._imag,2);
	comp_div._real = ((_real*four._real) + (_imag*four._imag))/denom;
	comp_div._imag = ((_imag*four._real) - (_real*four._imag))/denom;
	return comp_div;
}

Complex Complex::cconj() {
	Complex comp_cconj;
	comp_cconj._real = _real;
	comp_cconj._imag = _imag * (-1);
	return comp_cconj;
}

double Complex::magnitude() {
	double magnitude;
	magnitude = sqrt(pow(_real,2) + pow(_imag,2));
	return magnitude;
}

double Complex::phase() {
	double angle;
	angle = atan(_imag/_real)*(180/3.1415926535);
	return angle;
}




