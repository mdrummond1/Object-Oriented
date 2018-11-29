/*Matthew Drummond
 *B333M439
 *Program #4
 * 
 * 		Pseudo Code
 * 	Class name: Checking_account
 * 		This class inherits data members and member functions from Account.
 * 		It represents a checking account that charges a fee per transaction.
*	Data:
* 		fee - the fee charged for each transaction
* 	Mutator functions:
* 		Constructor - Will create a new account with a given fee per transaction
* 	Functions:
* 		credit - after Account.credit is called the fee will be subtracted
* 		debit - if Account.debit is successful the fee will be subtracted
*/

#include "account.hpp"

class Checking_account: public Account
{
			//data members
			double fee;
		
		public:	
			//constructors
			Checking_account();
			Checking_account(double f, double bal);
			
			//Member functions
			void credit(double amount);
			void debit(double amount);
};
