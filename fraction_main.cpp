/*	Matthew Drummond
	B333M439
	Program #3

	main 3 contains a menu to access the different operations of 
	* the fraction class.*/
  


#include <iostream>
#include "fraction.hpp"

using namespace std;

int main()
{
		int input;
			
		do
		{	
					cout << "Menu\n";
					cout << "What would you like to do?\n";
					cout << "1. Add fractions\n";
					cout << "2. Subtract fractions\n";
					cout << "3. Multiply fractions\n";
					cout << "4. Divide fractions\n";
					cout << "5. Reduce a fraction\n";
					cout << "6. Show the decimal equivalent of a fraction\n";
					cout << "7. Exit the program\n";
			
					cin >> input;
			
					switch (input)
					{
								case 1: {
									    Fraction f1, f2;
									    cin >> f1;
									    cin >> f2;
									    cout << (f1 + f2);
										break;
										}
								case 2: {
										Fraction f1, f2;
										cin >> f1;
										cin >> f2;
										cout << (f1 - f2);
										break;
										}
								case 3: {
										Fraction f1, f2;
										cin >> f1;
										cin >> f2;
										cout << (f1 * f2);
										break;
										}
								case 4: {
										Fraction f1, f2;
										cin >> f1;
										cin >> f2;
										cout << (f1/f2);
										break;
										}
								case 5: {
										Fraction f;
										cin >> f;
										cout << f.reduce() << endl;
										break;
										}
								case 6: {
										Fraction f;
										cin >> f;
										f.calc_dec();
										break; 
										}
								}
					} while (input !=7);		
					
				
			
					
		return 0;
	
}

