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
	std::cout << "real: "  << _real << " imag: " << _imag << "j" << std::endl;
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
	//check for divide by zero error and return 0 + 0j as well as warning message
	if (denom == 0){
		std::cout << "Divide by zero Error" << std::endl;
		comp_div._real = 0;
		comp_div._imag = 0;
		return comp_div;
	}
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
	//for the case on the imaginary axis if imag positive angle is 90 otherwise -90
	if (_real == 0) {
		if (_imag > 0) {
			angle = 90;
		}
		else if (_imag < 0){
			angle = -90;
		}
		//in the case real and imag is zero the angle is undefined
		else {
			std::cout << "angle is undefined" << std::endl;
			angle = 0;
		}
		return angle;
	}
	angle = atan(_imag/_real)*(180/3.1415926535); //convert arctan (radians) to degrees
	return angle;
}

Complex Complex::operator+(Complex comp_nums){
	Complex temp(_real, _imag);
	return temp.add(comp_nums);
}

Complex Complex::operator-(Complex comp_nums){
	Complex temp(_real, _imag);
	return temp.sub(comp_nums);
}

Complex Complex::operator*(Complex comp_nums){
	Complex temp(_real, _imag);
	return temp.mult(comp_nums);
}

Complex Complex::operator/(Complex comp_nums){
	Complex temp(_real, _imag);
	return temp.div(comp_nums);
}

Complex Complex::operator=(Complex comp_nums){
	_real = comp_nums._real;
	_imag = comp_nums._imag;
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Complex comp_num) {
	out << comp_num._real << " " << comp_num._imag;
	return out;
}

std::istream& operator>>(std::istream &in, Complex &comp_num) {
	in >> comp_num._real >> comp_num._imag;
	return in;
}

