/*Matthew Drummond
  B333M439
  Program #3


		
		
		Pseudo Code
		* Class Name: fraction
		* 	This class holds a fraction
		* Data: numer - holds the numerator
		* 		denom - holds the denominator
		* 		decimal - holds the decimal equivalent
		* Mutator Functions:
		* 		Default constructor - set numer, denom, and decimal to 1
		* 		Constructor - set numer and denom to values calculate decimal
		* 		operator+ - add fractions
		* 		operator- - subtract fractions
		* 		operator/ - divide fractions
		* 		operator* - multiply fractions
		* 		operator>> set values
		* 		calc_dec - Calculate decimal equivalent
		* Accessor Functions:
		* 		get_numer - return numerator
		* 		get_denom - return denominator
		* 		get_decimal - return decimal 
		* 		operator<< - displays fraction
		* 		reduce_frac - return reduced fraction
		* 
		*/

#ifndef __FRACTION_HPP
#define __FRACTION_HPP

#include <iostream>

using namespace std;


//class definition
class Fraction
{
			//data members
			int numer, denom;
			double decimal;

			public:
			//Constructors
			Fraction();
			Fraction(int num, int den);
	
			//calculate decimal equivalent
			void calc_dec();
	
			//mutator functions
			Fraction operator+ (const Fraction &f);
			Fraction operator- (const Fraction &f);
			Fraction operator/ (const Fraction &f);
			Fraction operator* (const Fraction &f);
			Fraction operator>> (const Fraction &f);
			Fraction reduce();
			
	
			//accessor functions
			int get_numer();
			int get_denom();
			double get_decimal();
			void operator<<(const Fraction &f);
			void reduce_frac();
			
			//friend functions
			friend std::ostream& operator<< (std::ostream& out_stream, const Fraction& f);
			friend std::istream& operator>> (std::istream& in_stream, Fraction & f);
			friend void red_fraction();
};

#endif
