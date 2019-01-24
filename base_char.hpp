/* Matthew Drummond
   B333M439
   Project: Dungeons and Dragons character program
  
  			Pseudocode
	Class Name: Base_char
   		this class describes a dungeons and dragons character
  Data:	race - characters race
			name - characters name
			clss - characters class
			strength - characters strength score
			dex - characters dexterity score
			cha - characters charisma score
			wis - characters wisdom score
			intel - characters intelligence score
			con - characters constitution score

  	mutator functions
			set_name
				changes the name of the character
			Input: reference to an array of names
			Output: none
			Returns: string

			pick_name
				sets the characters name to a randomly selected name 
			Input: reference to an array of names
			Output: none
			Returns: none
		
    default constructor 
			gives random name and race. sets clss to fighter all attributes to 10
		Input: none
		Output: None
		Returns: class object
		
		overloaded constructor
			Allows data members to be set by user
		Input: parameters for all data members
		Output: none
		Returns: class object
        
    friend overloaded << - output class data members
		friend overloaded >> - inpute class data members
		friend read_chars - reads characters from file into an array
		friend write_chars - writes characters to a file from an array
    */
#ifndef __BASE_CHAR_HPP__
#define __BASE_CHAR_HPP__
#include <string>
using namespace std;

class Base_char
{
	//data
 protected:
    string name, race, clss;
    
    int strength, dex, cha, wis, intel, con;
		
  public:
		//mutator function
		void set_name(string name);
		void pick_name(const string (&nam)[8][81]);
    
		//constructors
    Base_char();
    Base_char(string n, string r, string cl, int str, int d, int c, int w, int i, int co);
				   
    //friend functions
		friend ostream & operator<<(ostream& out, const Base_char T);
    friend istream & operator>>(istream& in, Base_char& c);
		friend int read_chars(Base_char chars[]);
		friend void write_chars(Base_char chars[], int size);
};
#endif