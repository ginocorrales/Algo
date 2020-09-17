/*
Author: Gino P. Corrales-Delgado
IT 279 - Assign 4

This file will test the Person Class, calling all its functions and even trying the overload operator '==".
I am attaching also the Makefile to help comple and run this program.
*/

#include "LogOnSystem.h"

int main()
{
  //Creation of the persons
	Person p1("John Allan","Smith");
  Person p2("Erik","Ferguson");
  Person p3("Lisa","Donovan");
  Person p4("Mary Alice","Ditsworth");
  Person p5("Marge","Worten");
  Person p6("John Allan","Smith");
	Person p7("Gino","Corrales");

  //here is testing and printing the full names of the persons in the normal form
  cout<<"***************************"<<endl;
  cout<<"First person's full name:  " << p1.GetFullName() <<endl;
	cout<<"Second person's full name: "<< p2.GetFullName() <<endl;
	cout<<"Third person's full name:  " << p3.GetFullName() <<endl;
	cout<<"Fourth person's full name: "<< p4.GetFullName() <<endl;
	cout<<"Fifth person's full name:  " << p5.GetFullName() <<endl;
	cout<<"Sixth person's full name: "<< p6.GetFullName() <<endl;
	cout<<"Seventh person's full name:  " << p7.GetFullName() <<endl;

  //here is testing and to printing the full names of the persons in the list form
  cout<<"***************************"<<endl;
  cout<<"List of Names:"  << endl;
  cout<< p1.GetListName() << endl;
	cout<< p2.GetListName() << endl;
	cout<< p3.GetListName() << endl;
  cout<< p4.GetListName() << endl;
	cout<< p5.GetListName() << endl;

  //here is testing and printing the initials of the persons
  cout<<"***************************"<<endl;
  cout<<"Initials of the Names:"  << endl;
	cout<< p1.GetInitials() << endl;
	cout<< p2.GetInitials() << endl;
	cout<< p3.GetInitials() << endl;
  cout<< p4.GetInitials() << endl;
	cout<< p5.GetInitials() << endl;

  //here is testing and printing the Logon names of the persons
  cout<<"***************************"<<endl;
  cout<<"LogOn Names:"  << endl;
	cout<< p1.GetLogon() << endl;
	cout<< p2.GetLogon() << endl;
	cout<< p3.GetLogon() << endl;
	cout<< p4.GetLogon() << endl;
	cout<< p5.GetLogon() << endl;

  //here is testing the overload operator '=='
  cout<<"***************************"<<endl;
  cout<<"Trying the operator '==' " <<endl;
  if(p1==p2)
		cout<<"The First and the Second Person are the same person" <<endl;
  else
    cout<<"The First and the Second Person are NOT the same person" <<endl;
  if(p1==p6)
		cout<<"The First and the Sixth Person are the same person" <<endl;
  else
    cout<<"The First and the Sixth Person are NOT the same person" <<endl;
  cout<<"***************************"<<endl;

  return 0;
}
