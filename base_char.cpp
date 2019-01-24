/* Matthew Drummond
 * B333M439
 * Project: dungeons annd draons character program
 * 
 * 	Index of methods:
 * 1. default constructor
 * 2. overloaded constructor
 * 3. set_name
 * 4. pick_name
 * 
 * 
*/

#ifndef __BASE_CHAR_CPP__
#define __BASE_CHAR_CPP__

#include "base_char.hpp"
#include <iostream>
#include <string>
using namespace std;

//1. default constructor
Base_char::Base_char()
{
	name = "";
	race = "Human";
	clss = "Fighter";
	strength = 10;
	dex = 10;
	cha = 10;
	wis = 10;
	intel = 10;
	con = 10;

}


//2. overloaded constructor
Base_char::Base_char(string n, string r, string cl, int str, int d, int c, int w, int i, int co)
//n = name	r = race	cl = class	str=strength	d=dex	c=cha	w=wis	i=intel	co=con
{
    name = n;
    race = r;
    clss = cl;
    strength = str;
    dex = d;
    cha = c;
    wis = w;
    intel = i;
    con = co;

}

//3. set_name
void Base_char::set_name(string n)
{
    name = n;
}

//4. pick_name
void Base_char::pick_name(const string (&nam)[8][81])
{
    string n;		

	//if/else statements set n based on the race
	if (race == "Elf")
	{
        n = nam[0][rand()% 80 + 1];
	}
    
    else if (race == "Half Elf")
	{
		n = nam[0][rand()% 80 + 1];
	}

	else if (race == "Dwarf")
	{
		n = nam[1][rand()% 80 + 1];
	}

	else if (race == "Dragonborn")
	{
		n = nam[2][rand()% 80 + 1];
	}
	
	else if(race == "Gnome")
	{
		n = nam[3][rand()% 80 + 1];
	}

	else if(race == "Halfling")
	{
		n = nam[4][rand()% 80 + 1];
	}

	else if (race == "Human")
	{
		n = nam[5][rand()% 80 + 1];
	}

	else if (race == "Tiefling")
	{
		n = nam[6][rand()% 80 + 1];
	}

	else if (race == "Half Orc")
	{
		n = nam[7][rand()% 80 + 1];
	}

	name = n;
}


#endif