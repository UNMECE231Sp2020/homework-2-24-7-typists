//Complex .h

class Complex {
	private:
		double _real;
		double _imag;
	public:
		Complex();
		Complex(double real, double imag);
		Complex(double real);
		Complex(const Complex &Comp);
		double real();
		double imag();
		void print();
		Complex add(Complex one);
		Complex sub(Complex two);
		Complex mult(Complex three);
		Complex div(Complex four);

};
