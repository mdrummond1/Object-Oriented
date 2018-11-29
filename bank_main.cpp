/*Matthew Drummond
 * 
 * 			Pseudo code
 * 		1. Test general class Account features.
 * 			a. overloaded constructor.
 * 			b. credit function.
 * 			c. debit function w/ amount > account balance.
 * 			d. debit function w/ amount < account balance.
 * 		
 * 		2. Test Savings_account features
 * 			a. overloaded constructor.
 * 			b. Checking credit function from Account.
 * 			c. Check debit w/ amount < balance
 * 			d. Check debit w/ amount > balance
 * 
 * 		3. Test Checking_account features
 * 			a. overloaded constructor.
 * 			b. Check credit function.
 * 			c. Check debit (amount < balance) subtract fee.
 * 			d. Check debit (amount > balance) do not subtract fee.
*/

#include <iostream>
#include "account.hpp"
#include "savings_account.hpp"
#include "checking_account.hpp"

using namespace std;

int main()
{
			cout << "calling Account constructor\n";
			Account Acc_1(15.78);
			
			cout << "calling Account's credit function.\n";
			Acc_1.credit(10.98);
			
			cout << "calling debit w/ amount > account balance.\n";
			Acc_1.debit(26.77);
			
			cout << "calling account debit w/ amount < account balance.\n";
			Acc_1.debit(2.36);
			
			cout << "creating instance of Savings_account.\n";
			Savings_account Sav_1(.0012, 347.67);
			
			cout << "calling account's credit in Savings_account\n";
			Sav_1.credit(24.69);
			
			cout << "calling debit w/ amount < account balance\n";
			Sav_1.debit(42.98);
			
			cout << "calling debit w/ amount > account balance\n";
			Sav_1.debit(567.89);
			
			double interest = Sav_1.calculate_interest();
			
			cout << "Adding $ " << interest << " in interest.\n";
			
			Sav_1.credit(interest);
			
			cout << "creating instance of Checking_account\n";
			Checking_account Chk_1(2.48, 548.56);
			
			cout << "call credit function and subtract fee.\n";
			Chk_1.credit(100.53);
			
			cout << "call debit function w/ amount < account balance. sub fee\n";
			Chk_1.debit(2.50);
			
			cout << "call debit function w/ amount > balance\n";
			Chk_1.debit(700.52);
			
			cout << "show that the fee has not been subtracted.\n";
			cout << Chk_1.get_balance() << endl;
			
			return 0;
}
