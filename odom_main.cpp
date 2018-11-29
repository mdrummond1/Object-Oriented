/*Matthew Drummond
This program will create instances of the Odometer class and test various values


The main function will perform various tests with differing values for 
 * 5 different odometer instances.
 *  */




#include <iostream>
#include "odometer.hpp"
using namespace std;



int main()
{
	//Create instance Odom1 using Constructor to initialize values
	Odometer Odom1(67.9, 43.0); 
	cout << "Odom1's gallons is: " << Odom1.get_gallons() << endl;
	cout << "Odom1's mileage is: " << Odom1.get_mileage() << endl;
	cout << "Odom1's mpg is: " << Odom1.get_mpg() << endl;
	cout << "We need " << Odom1.gallons_needed(50) << " gallons to go 50 miles\n";


	cout << "Adding to mileage and gallons,\n";
	Odom1.add_trip(1,4);
	
	cout << "Odom1's gallons is: " << Odom1.get_gallons() << endl;
	cout << "Odom1's mileage is: " << Odom1.get_mileage() << endl;
	cout << "Odom1's mpg is: " << Odom1.get_mpg() << endl;
	cout << "We need " << Odom1.gallons_needed(505) << " gallons to go 505 miles\n";
	
	cout << "Resetting values to 0.\n";
	Odom1.reset();
	
	cout << "Odom1's gallons is: " << Odom1.get_gallons() << endl;
	cout << "Odom1's mileage is: " << Odom1.get_mileage() << endl;
	cout << "Odom1's mpg is: " << Odom1.get_mpg() << endl;
	
	
	
	Odometer Odom2(150.7, 5.4);
	
	cout << "Odom2's gallons is: " << Odom2.get_gallons() << endl;
	cout << "Odom2's mileage is: " << Odom2.get_mileage() << endl;
	cout << "Odom2's mpg is: " << Odom2.get_mpg() << endl;
	cout << "We need " << Odom2.gallons_needed(453.6) << " gallons to go 453.6 miles\n";
	
	cout << "Adding to mileage and gallons,\n";
	Odom2.add_trip(73.4,47.9);
	
	cout << "Odom2's gallons is: " << Odom2.get_gallons() << endl;
	cout << "Odom2's mileage is: " << Odom2.get_mileage() << endl;
	cout << "Odom2's mpg is: " << Odom2.get_mpg() << endl;
	cout << "We need " << Odom2.gallons_needed(786.47) << " gallons to go 786.47 miles\n";

	cout << "Resetting values to 0.\n";
	Odom2.reset();
	
	cout << "Odom2's gallons is: " << Odom2.get_gallons() << endl;
	cout << "Odom2's mileage is: " << Odom2.get_mileage() << endl;
	cout << "Odom2's mpg is: " << Odom2.get_mpg() << endl;
	
	Odometer Odom3(289, 13);
	 
	cout << "Odom3's gallons is: " << Odom3.get_gallons() << endl;
	cout << "Odom3's mileage is: " << Odom3.get_mileage() << endl;
	cout << "Odom3's mpg is: " << Odom3.get_mpg() << endl;
	cout << "We need " << Odom3.gallons_needed(2489.75) << " gallons to go 2489.75 miles\n";
	
	cout << "Adding to mileage and gallons,\n";
	Odom3.add_trip(73.4,47.9);
	
	cout << "Odom3's gallons is: " << Odom3.get_gallons() << endl;
	cout << "Odom3's mileage is: " << Odom3.get_mileage() << endl;
	cout << "Odom3's mpg is: " << Odom3.get_mpg() << endl;
	cout << "We need " << Odom3.gallons_needed(78) << " gallons to go 78 miles\n";

	cout << "Resetting values to 0.\n";
	Odom3.reset();
	
	cout << "Odom3's gallons is: " << Odom3.get_gallons() << endl;
	cout << "Odom3's mileage is: " << Odom3.get_mileage() << endl;
	cout << "Odom3's mpg is: " << Odom3.get_mpg() << endl;
	
	
	Odometer Odom4(78924,4);
	 
	cout << "Odom4's gallons is: " << Odom4.get_gallons() << endl;
	cout << "Odom4's mileage is: " << Odom4.get_mileage() << endl;
	cout << "Odom4's mpg is: " << Odom4.get_mpg() << endl;
	cout << "We need " << Odom4.gallons_needed(5000) << " gallons to go 5000 miles\n";
	
	cout << "Adding to mileage and gallons,\n";
	Odom4.add_trip(.7,185.59);
	
	cout << "Odom4's gallons is: " << Odom4.get_gallons() << endl;
	cout << "Odom4's mileage is: " << Odom4.get_mileage() << endl;
	cout << "Odom4's mpg is: " << Odom4.get_mpg() << endl;
	cout << "We need " << Odom4.gallons_needed(78) << " gallons to go 78 miles\n";
	
	cout << "Resetting values to 0.\n";
	Odom4.reset();
	
	cout << "Odom4's gallons is: " << Odom4.get_gallons() << endl;
	cout << "Odom4's mileage is: " << Odom4.get_mileage() << endl;
	cout << "Odom4's mpg is: " << Odom4.get_mpg() << endl;
	
	Odometer Odom5;
	
	cout << "Odom5's gallons is: " << Odom5.get_gallons() << endl;
	cout << "Odom5's mileage is: " << Odom5.get_mileage() << endl;
	cout << "Odom5's mpg is: " << Odom5.get_mpg() << endl;
	
	cout << "Adding to mileage and gallons,\n";
	Odom5.add_trip(589,12);
	
	cout << "Odom5's gallons is: " << Odom5.get_gallons() << endl;
	cout << "Odom5's mileage is: " << Odom5.get_mileage() << endl;
	cout << "Odom5's mpg is: " << Odom5.get_mpg() << endl;
	cout << "We need " << Odom5.gallons_needed(78) << " gallons to go 78 miles.\n";
	
	
	cout << "Resetting values to 0.\n";
	Odom5.reset();
	
	cout << "Odom5's gallons is: " << Odom5.get_gallons() << endl;
	cout << "Odom5's mileage is: " << Odom5.get_mileage() << endl;
	cout << "Odom5's mpg is: " << Odom5.get_mpg() << endl;
	
	
	return 0;
}
