/*Matthew Drummond
 * 
 * 			Pseudo Code
 * 
 * 	Class name: Savings_account
 * 		Inherits data members and functions from Account class.
 * 		Represents an account that will gain interest over time.
 * 	Data:
 * 		interest - the interest rate assigned to the account
 *	Mutator functions:
 * 		constructor - Creates a new Savings_account with given balance and rate
 * 	Functions:
 * 		calculate_interest - multiply the balance and interest rate for interest
 * 
 * 		
 */
 
 
 #include "account.hpp"
 
 
 class Savings_account: public Account
 {
			float interest_rate;
			
		public:
			Savings_account();
			Savings_account(double i, double bal);
			double calculate_interest();
			
			
			
 };
