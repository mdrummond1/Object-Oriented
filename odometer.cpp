//Matt Drummond


#include "odometer.hpp"



	
	//Default constructor
	Odometer::Odometer() 
	{
		gallons = 0;
		mileage = 0;
		mpg = 0;
	};
	
	//Constructor to set miles and gallons to a given value
	Odometer::Odometer(float mil, float gal)
	{
			mileage = mil;
			gallons = gal;
			mpg = (mil/gal);
	};
	
	//Returns miles
	float Odometer::get_mileage()
	{
		return mileage;
	};
	
	//Returns gallons
	float Odometer::get_gallons() 
	{
		return gallons;
	};
	
	//Returns mpg
	float Odometer::get_mpg()
	{
		return mpg;
	};
	
	//Returns gallons needed to travel a given distance
	float Odometer::gallons_needed(float miles_traveling)
	{
		return (miles_traveling/mpg);
		
	};

	
	//Adds a trip to Odometer
	void Odometer::add_trip(float mil, float gal)
	{
		mileage += mil;
		gallons += gal;
		mpg = (mileage/gallons);
	}

	//Resets data members to 0
	void Odometer::reset()
	{
		mileage = 0;
		gallons = 0;
		mpg = 0;
	};
