/* 	Matthew Drummond
	B333M439
	Program Number: 2

	Description:
	* This is an odometer class that can create an empty odometer or, one with miles/fuel used.
	* It will calculate mpg and gallons needed for a certain distance.
	* 
	* Pseudo Code:
	* 			Data:
	* 					miles - contains miles driven
	* 					gallons - contains gallons of gas used
	* 					mpg - contains fuel efficiency of vehicle
	* 
	* 			Function:
	* 					Default constructor - sets miles and gallons to 0
	* 					Constructor - accepts miles and gallons and calls for mpg
	* 					Accessor functions:
	* 							get_miles - returns miles
	* 							get_gallons - returns gallons
	* 							get_mpg - returns mpg
	* 					Member function:
	* 							calc_mpg - calculates the mpg from miles and gallons
	* 									Return: mpg
	* 									Input: None
	* 
	* 									mpg = miles/gallons
	* 
	* 							gallons needed - calculates the gallons needed to travel a given number of miles
	* 									Return: gallons needed
	* 									Input: miles to be traveled
	* 
	* 							add_trip - Adds a trip (miles and gallons) to Odometer
	* 									Return: none
	* 									Input: miles and gallons to be added
	* 
	* 							reset - resets values for miles and gallons to 0
	* 
	* */
	
	//Odometer class definition
	class Odometer					
	{
		//private data members
			float mileage, gallons, mpg;
			void calc_mpg();
			
	public:
		//Constructors 
			Odometer();
			Odometer(float x, float y);
			
		//member functions
			//accessor functions
			float get_mileage();
			float get_gallons();
			float get_mpg();
			
			float gallons_needed(float miles_traveling);
			
			void add_trip(float mil, float gal);
			void reset();
	};
	
	
