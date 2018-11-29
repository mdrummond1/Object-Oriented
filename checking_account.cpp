/*Matthew Drummond
 * 
 * 			Pseudo Code
 * 1. Default constructor
 * 2. Overloaded constructor
 * 3. Credit
 * 4. Debit
 * 
 */
#include "checking_account.hpp"
#include <iostream>

//1. Default constructor
Checking_account::Checking_account()
{
}

//2. Overloaded constructor
Checking_account::Checking_account(double f, double bal)
{
			fee = f;
			acc_bal = bal;
}

//3. Add amount to account balance and subtract fee
void Checking_account::credit(double amount)
{
			Account::credit(amount);
			
			acc_bal -= fee;
			
			std::cout << "Your new balance after the fee is " << acc_bal << ".\n";
			
}

//4. Withdraw amount from balance. if successful, subtract fee
void Checking_account::debit(double amount)
{
			bool deb_bool;
			
			deb_bool = Account::debit(amount);
			
			if (deb_bool == true)
						{
							acc_bal -= fee;
							std::cout << "Your balance after the fee is ";
							std::cout << acc_bal << ".\n";
						}
			
}
