/*
Author: Gino P. Corrales-Delgado
IT 279 - Assign 4

This is the .cpp file of the LogonSystem class. Here is the implementation of the functions f the Person Class
*/
#include "LogOnSystem.h"

using namespace std;

Person::Person(string pName, string pFamilyName){	//Class constructor
  SetName(pName);
  SetFamilyName(pFamilyName);
  this->pFullName = this->pName + " " + this->pFamilyName;
}

bool operator ==(const Person& aPerson1, const Person& aPerson2) {  //overload operator '=='
	return((aPerson1.pName == aPerson2.pName) && (aPerson1.pFamilyName == aPerson2.pFamilyName));
  // also possible to use strcmp(str1,str2)  // return 0 if both str are the same.
}

//Setter and Getters 		
void Person::SetName(string pName){ 
  this->pName = pName; 
}

void Person::SetFamilyName(string pFamilyName) {
	this->pFamilyName = pFamilyName;
}

string Person::GetpName(){
  return pName;
}

string Person::GetpFamilyName(){
	return pFamilyName;
}

string Person::GetFullName(){ // return the full name in a usual order
	return GetpName() + " " + GetpFamilyName();
}

string Person::GetListName(){ // return the name in family name, given name format
	return GetpFamilyName() + ", " + GetpName();
}

string Person::GetInitials(){ // return the first letter of each word including name and family name
  string t4, t1 = pName;
  string t2 = pFamilyName;
  int position = t1.find(" ");
  if (position>=1)
		t4=t1.substr(position+1,1);
  string allInitials = t1.substr(0,1) + t4 + t2.substr(0,1);
  return allInitials;
}

string Person::GetLogon(){ // return up to 7 letters from the family name, plus up to 2 initials from the given name
  string logOn;
  logOn = pFamilyName.substr(0,7) + pName.substr(0,2);
  for (int i=0; i<=logOn.length(); i++) 
    	logOn[i]=tolower(logOn[i]);
  return logOn;
}
