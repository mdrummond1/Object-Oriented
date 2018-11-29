/*Matthew Drummond
 *
 * 			Pseudo Code
 *	Class name: Account
 *	 	This class is a generic representation of a bank account
 *	 	It will be used as a base class to derive other types of accounts
 *	Data:
 *	 	acc_bal - current account balance
 *	Accessor functions:
 *	Function: get_balance - output account balance
 *		Input: none
 * 		Output: none
 * 		Return: none
 *	Mutator functions:
 *	Function: default class constructor
 *		Sets initial balance to 0
 *		Input: none
 *		Output: none
 * 		Return: new account instance
 *	Function: class constructor
 * 		Input: initial balance
 * 		Output: "Your current balance is : acc_bal"
 * 		Return: new account instance
 *	Member Functions:
 * 	Function: credit
 * 		adds amount to current balance
 *		Input: amount to be added to balance
 * 		Output: "New account balace is: acc_bal"
 * 		Return: none
 * 	Function: debit
 * 		if amount is less than balance, withdraws amount from current balance
 * 		Input: amount to be deducted
 * 		Output: successful check will give new account balance
 * 				Unsuccessful check "Debit amount exceeded account balance."
 * 		Return: boolean
 */
	
	
#ifndef __ACCOUNT_HPP__
#define __ACCOUNT_HPP__

//class definitions
class Account
{		protected:
			//Data members
			double acc_bal;
			
		public:
			//accessor function
			double get_balance();
			
			//constructor
			Account();
			Account(double bal);
			
			//member functions
			void credit(double amount);
			bool debit(double amount);
};

#endif
