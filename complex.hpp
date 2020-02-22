//Complex .h

class Complex {
	private:
		double _real;
		double _imag;
	public:
		//Constructos for no argument, real only and real and imaginary parts
		Complex();
		Complex(double real, double imag);
		Complex(double real);
		Complex(const Complex &Comp);

		//Getter functions
		double real();
		double imag();

		void print();

		//Math functions
		Complex add(Complex one);
		Complex sub(Complex two);
		Complex mult(Complex three);
		Complex div(Complex four);
		Complex cconj();
		double magnitude();
		double phase();

		//Operator overloads
		Complex operator+(Complex comp_num);	
		Complex operator-(Complex comp_num);
		Complex operator*(Complex comp_num);
		Complex operator/(Complex comp_num);
		Complex operator=(Complex comp_num);
	
		friend std::ostream& operator<<(std::ostream &out, const Complex comp_num);
		friend std::istream& operator>>(std::istream &in, Complex &comp_num);
};
