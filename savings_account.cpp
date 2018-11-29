/*Matthew Drummond
 *B333M439
 *Program #4
 * 
 * 	Pseudo code for savings_account class
 * 1. Default Constructor
 * 2. Overloaded constructor
 * 3. Calculate interest
 * 4. overloaded << operator
 * 
 * 
 * 
 * 
 * */
#include "savings_account.hpp"
#include <iostream>

Savings_account::Savings_account()
{
			interest_rate = .0008;
			acc_bal = 0;
}

Savings_account::Savings_account(double i, double bal)
{
			interest_rate = i;
			acc_bal = bal;
}

double Savings_account::calculate_interest()
{
	double earned_interest;
	earned_interest = interest_rate * acc_bal;
	
	std::cout << "You have accrued $" << earned_interest << " in interest.\n";
	
	return earned_interest;
	
}
