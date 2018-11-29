/* 			Pseudo code
* 	Function definitions for the Account class.
* 
* 	1. get_balance
* 	2. default constructor
* 	3. overloaded constructor
* 	4. credit
* 	5. debit
*/

#include "account.hpp"
#include <iostream>

using namespace std;

//1. get_balance
double Account::get_balance()
{
			return acc_bal;
}

//2. Default constructor
Account::Account()
{
			acc_bal = 0;
}


//3. overloaded constructor
Account::Account(double bal)
{
			if (bal > 0)
			{
						acc_bal = bal;
						
						cout << "Your current balance is: $" << acc_bal << endl;
			}
			
			else
			{
						
						cerr << "That is not a valid balance.\n";
						
						acc_bal = 0;
			}
}

//4. credit
void Account:: credit(double amount)
{
			acc_bal += amount;
			
			cout << "Your new amount is: $" << acc_bal << endl;
}

//5. debit
bool Account::debit(double amount)
{
			if (amount > acc_bal)
			{
						cerr << "Debit amount exceeded account balance.\n";
						return false;
			}
			
			else 
			{
						acc_bal -= amount;
						cout << "Your new amount is: $" << acc_bal << endl;
						return true;
			}
}

