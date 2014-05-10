#ifndef _PERSON_H_
#define _PERSON_H_
/*
Author: Gino P. Corrales-Delgado
IT 279 - Assign 4

This is the header of the Person Class class. This function receives names of person and returns different in different
way the name, such as usual given name and family name, as list form, first last name and later the first names, also 
return initials of the full name and a Log on names  
*/
#include <string>
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class Person{

  public:
    
		//Person();
		Person(string pName, string nFamilyName); //constructor that take the name and family name
		//Setters and Getters
		void SetName(string pFamilyName);
		void SetFamilyName(string pFamilyName);
		string GetpName();  // gets the first name of the person 
		string GetpFamilyName(); //gets the last name of the person

		friend bool operator ==(const Person& aPerson1, const Person& aPerson2); //overload operator '=='
		
		string GetFullName(); // return the full name in a usual order (name + family name)
		string GetListName(); // return the name in family name, given name format (family name + name)
		string GetInitials(); // return the first letter of each word including name and family name
		string GetLogon(); // return up to 7 letters from the family name, plus up to 2 initials from the given name, all lower case

 private:
		string pName;	 // will keep the first name of the object
		string pFamilyName; // will keep the last name of the object
    string pFullName;  //will keep the first name of the object, it will help for getInitials and getLogon functions
};
#endif

