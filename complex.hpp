//Complex .h

Class Complex {
	private:
		double _real;
		double _imag;
	public:
		Complex();
		Complex(double real, double imag);
		Complex(const Complex &Comp);
		double real();
		double imag();
		void print();
};
