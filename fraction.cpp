//Matthew Drummond


#include <iostream>
#include "fraction.hpp"


using namespace std;



//default constructor
Fraction::Fraction()
{
			numer = 1;
			denom = 1;
			decimal = 1;
}


//Constructor
Fraction::Fraction(int num, int den)
{
			numer = num;
			denom = den;
			decimal = (double)num /den;
}

//return decimal equivalent
void Fraction::calc_dec()
{
			cout << (double)numer/denom << endl;
}

//adds 2 fractions
Fraction Fraction::operator+(const Fraction &f)
{
			int num1,  num2, den;

			if (numer == f.numer)
			{
						num1 = numer + f.numer;
						den = denom;
						return Fraction(num1, den);
			}
	
			else
			{
						den = denom * f.denom;
						num1 = numer * f.denom;
						num2 = f.numer * denom;
		
						return Fraction((num1 + num2),den);
			}
	
}

//subtracts 2 fractions
Fraction Fraction:: operator-(const Fraction &f)
{
			int num1,num2, den;
	
			if (numer == f.denom)
			{
						num1 = numer - f.numer;
						den = denom;
						return Fraction(num1, den);
			}
	
			else
			{
						den = denom * f.denom;
						num1 = numer * f.denom;
						num2 = f.numer * denom;
		
						return Fraction((num1 - num2),den);
			}
}

//multiplies 2 fractions
Fraction Fraction:: operator*(const Fraction &f)
{
			int num, den;
	
			num = numer * f.numer;
			den = denom * f.denom;
	
			return Fraction(num, den);
}

//divides 2 fractions
Fraction Fraction::operator/(const Fraction &f)
{
			int num, den, num_prod, den_prod;
	
			num = f.denom;
			den = f.numer;
	
			num_prod = numer * num;
			den_prod = denom * den;
	
			return Fraction(num_prod, den_prod);
}



//get numerator
int Fraction::get_numer()
{
			return numer;
}

//get denominator
int Fraction::get_denom()
{
			return denom;
}

//get decimal
double Fraction::get_decimal()
{
			return decimal;
}
	
	
//friend functions

//overloaded output operator
std::ostream& operator<< (std::ostream& out_stream, const Fraction& f)
{
			out_stream << f.numer << "/" << f.denom;
			return out_stream;
}


//overloaded input operator
std::istream& operator>> (std::istream& in_stream,  Fraction& f)
{
			cout << "Enter numerator and denominator:";
			in_stream >> f.numer;
			in_stream >> f.denom;
			return in_stream;
}

//Reduces the fraction
Fraction Fraction::reduce()
{
			int num, den;
				
			if ((numer * denom) < 0)
			{
						for (int i = -1; i > (numer * denom); i--)
						{
									if ((numer % i) == 0 && (denom % i) == 0)
									{
												num = numer / i;
												den = denom / i;
									}
						}
			}
			
			else
			{
						for (int i = 1; i < numer * denom; i++)
						{
									if ((numer % i == 0) && (denom % i == 0))
									{
												num = (numer / i);
												den = (denom / i);
									}
						}
			}
				
			return Fraction(num, den);
}
				



