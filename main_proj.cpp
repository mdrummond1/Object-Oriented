/* Matthew Drummond
 * B333M439
 * Project: Dungeons and Dragons character program
 * 
 * 			Pseudocode
 * 	This program will use defined a class to store, and create characters
 * 	for the role-playing game, Dungeons and Dragons.
 * 	There will also be a die roller for the six different polyhedral dice.
 * 
 * 		Function: roll_die
 * 			Rolls a polyhedral die chosen by user.
 * 		Input: an integer for die to be rolled
 * 		Output: a random number (int % input) + 1
 * 		Return: none
 *  
 * 		Function: create_def_char
 * 			creates a default character with attribute scores equal to 10
 * 			and adds to array
 * 		Input: none
 * 		Output: none
 * 		Returns: a character object
 * 
 * 
 * 		Function: create_cust_char
 * 			creates a character with attributes chosen by the user and adds it
 * 			to an array of characters
 * 		Input: none (done by overloaded >>)
 * 		Output: prompts for input (from overloaded >>)
 * 		Returns: a character object
 * 	
 * 		Function: create_rand_char
 * 			creates a character with random attributes and adds
 * 			to array of characters
 * 		Input: array of classes and races to be randomized
 * 		Output: none
 * 		Returns: a character object
 * 
 * 		Function: error
 * 			throws a range error when custom character attributes are too high
 * 		Input: const string
 * 		Output: none
 * 		Return: none
 * 
 * 		Function: print_chars
 * 			prints all characters and attributes
 * 		Input: array of Base_char
 * 		Output: character data members
 * 		Returns: none
 * 		
 * 		Function: write_chars
 * 			writes Base_char array to txt file
 * 		Input: array, number of indices
 * 		Output: attributes of each Base_char object
 * 		Returns: none
 * 
 * 		Function: read_chars
 * 			Reads in characters, names from a txt file
 * 		Input: array of Base_char
 * 		Output: none
 * 		Returns: number of characters in txt file
 * 
 * 		Function: menu
 * 			displays menu
 * 		Input: none
 * 		Output: Options to be picked
 * 		Returns: none
 * 
 * 		Function: read_file
 * 			Reads in contents of file
 * 		Input: filename, array for values to be stored, size of array
 *		Output: none
 *		Returns: none
 *
 * 		Function: overloaded <<
 			outputs Base_char data members
		Input: output stream, const Base_char
		Output: Base_char data
		Returns: reference to outinput stream

		Function: overloaded >>
			input Base_char data members
		Input: input stream, reference to Base_char
		Output: prompts for input
		Returns: none
 * 			
 * 		
 */

#include <iostream>
#include "base_char.hpp"
#include <fstream>
#include <exception>
#include <ctime>
#include <vector>


using namespace std;



namespace char_funcs
{
	Base_char create_def_char()
	{
		Base_char Def;
		
		return Def;
		
	}

	Base_char create_cust_char()
	{
		Base_char Cust;
		cin >> Cust;
		
		return Cust;
		
	}

	Base_char create_rand_char(string cs[], string rc[])
	{
	 	string ra = rc[rand() % 10];
		string cl = cs[rand() % 12];
		
	
		int s = rand() % 16;
		int d = rand() % 16;
		int c = rand() % 16;
		int w = rand() % 16;
		int i = rand() % 16;
		int con = rand() % 16;
	
		
		Base_char Rand(" ", ra, cl, s, d, c, w, i, con);
		
		return Rand;
	}
	

	inline void error(const string& s)
	{
		throw range_error(s);
	}

	void print_chars(Base_char chars[], const int& size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << chars[i] << endl;
		}
	}
}

void write_chars(Base_char chars[], int size)
	{
		ofstream os;
		os.open("characters.txt");		
		os << size << endl;
	
		for (int i = 0; i < size; i++)
		{
			os << chars[i].name << endl;
			os << chars[i].race << endl;
			os << chars[i].clss << endl;
			os << chars[i].strength << endl;
			os << chars[i].dex << endl;	
			os << chars[i].cha << endl;
			os << chars[i].wis << endl;
			os << chars[i].intel << endl;
			os << chars[i].con << endl;
		}
	
		os.close();
	}

int read_chars(Base_char chars[])
	{
		ifstream in;

		in.open("characters.txt");
	
		int num_chars = 0;

		if (!in.fail())
		{
			in >> num_chars;
			in.ignore();
			for (int i = 0; i < num_chars; i++)
			{
				getline(in, chars[i].name);
				getline(in, chars[i].race);
				getline(in, chars[i].clss);
				in >> chars[i].strength >> chars[i].dex >> chars[i].cha >> chars[i].wis >> chars[i].intel >> chars[i].con;
				in.ignore();
			}
	
		}

		else
		{
			cout << "There are no saved characters.\n";
		}

		in.close();
		return num_chars;
	}

ostream & operator<<(ostream& out, const Base_char c)
	{
		out << "Name: " << c.name << endl;
		out << "Race: " << c.race << endl;
		out << "Class: " << c.clss << endl;
		out << "Strength: " << c.strength	<< endl;
		out << "Dexterity: " << c.dex << endl;
		out << "Charisma: " << c.cha << endl;
		out << "Wisdom: " << c.wis << endl;
		out << "Intelligence: " << c.intel << endl;
		out << "Constitution: " << c.con << endl;
	
		return out;
	}

istream & operator>>(istream& in, Base_char& c)
	{
		cout << "Enter name: " << endl;
		in >> c.name;
	
		cout << "Enter race: " << endl;
		in >> c.race;

		cout << "Enter class: " << endl;
		in >> c.clss;

		cout << "Enter strength score: " << endl; 
		in >> c.strength;	

		//if statements for exception handling
		if (c.strength > 15)
		{
			char_funcs::error("value cannot be above 15");
		}

		cout << "Enter dexterity score: " << endl;
		in >> c.dex;

		if (c.dex > 15)
		{
			char_funcs::error("value cannot be above 15");
		}
	
		cout << "Enter charisma score: " << endl;
		in >> c.cha;
	
		if (c.dex > 15)
		{
			char_funcs::error("value cannot be above 15");
		}
	
		cout << "Enter wisdom score: " << endl;
		in >> c.wis;
	
		if (c.wis > 15)
		{
			char_funcs::error("value cannot be above 15");
		}
	
		cout << "Enter intelligence score: " << endl;
		in >> c.intel;

		if (c.wis > 15)
		{
			char_funcs::error("value cannot be above 15");
		}
	
		cout << "Enter constitution score: " << endl;
		in >> c.con;
		cout << endl;
	
		if (c.con > 15)
		{
			char_funcs::error("value cannot be above 15");
		}
	
		return in;
	}

	

void roll_die()
{
	int input;
	
	
	cout << "What die do you want to roll? (4, 6, 8, 10, 12, 20)\n";
	cin >> input;
	
	int roll = rand() % input + 1;
	
	cout << "You rolled " << roll << ".\n";
	
	if (roll == 1)
	{
		
		cout << "Fail!\n";
	}
	
	else if(roll == input)
	{
		cout << "NATURAL" << roll << "!!\n";
	}
}

void menu()
{
	cout << "\nMAIN MENU\n";
	cout << "1. Die roller\n";
	cout << "2. Create Default Character\n";
	cout << "3. Create Custom Character\n";
	cout << "4. Create Random Character\n";
	cout << "5. View created characters\n";
	cout << "6. Save & Exit\n";
	cout << "Enter your selection\n";
}

void read_file(string cs[], string file, int size)
{
	ifstream in_stream;
	in_stream.open(file);
	for (int i = 0; i < size; i++)
	{
		getline(in_stream, cs[i]);
	}
	in_stream.close();
}

int main()	
{
	srand(time(NULL));
	
	int num_chars;
	string classes[12];
	string races[9];

	
	
	string names[8][81];
	
	read_file(classes, "assets\\classes.txt", 12);
	read_file(races, "assets\\races.txt", 9);


	cout << "Final class:" << classes[11] << endl;

	//import names from files
	read_file(names[0], "assets\\names\\elf_names.txt", 81);
	read_file(names[1], "assets\\names\\dwarf_names.txt", 81);
	read_file(names[2], "assets\\names\\drag_names.txt", 81);
	read_file(names[3], "assets\\names\\gnome_names.txt", 81);
	read_file(names[4], "assets\\names\\hal_names.txt", 81);
	read_file(names[5], "assets\\names\\hum_names.txt", 81);
	read_file(names[6], "assets\\names\\tief_names.txt", 81);
	read_file(names[7], "assets\\names\\orc_names.txt", 81);
	
	Base_char characters[100];

	num_chars = read_chars(characters);
	int sel;

	do
	{
		menu();
		cin >> sel;

		switch (sel)
			{
				case 1: roll_die();
						break;
				case 2: {
							characters[num_chars++] = char_funcs::create_def_char();
							cout << "You just created: \n";
							characters[num_chars- 1].pick_name(names);
							cout << characters[num_chars- 1] << endl;
							break;
						}	
				case 3: {
							try
							{
								characters[num_chars++] = char_funcs::create_cust_char();
								cout << "You just created: \n";
								cout << characters[num_chars-1] << endl;
							}
							catch (range_error& r)
							{					
								cout << r.what() << endl;
							}
								break;
						}
				case 4: {
							characters[num_chars++] = char_funcs::create_rand_char(classes, races);
							characters[num_chars-1].pick_name(names);
							cout << "You just created: \n";
							cout << characters[num_chars-1] << endl;
							break;
						}
				case 5: char_funcs::print_chars(characters, num_chars);
						break;
				}
	} while (sel != 6);

	write_chars(characters, num_chars);
	return 0;
}
