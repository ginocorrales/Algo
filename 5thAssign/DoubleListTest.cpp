/*
Author: Gino P. Corrales-Delgado
IT 279 - Assign 5

This file will test the DoubleList Class, caltesting its functions even the assign operator. 
I am attaching also the Makefile to help comple and run this program.
*/

#include "DoubleList.h"

int main()
{
  DoubleList list1;  // List1 will be used for add and remove numbers
	DoubleList list2;  // List2 will be used for copy from List1
	cout<<"Adding ten elements to the list1. . . " <<endl;
	
  list1.addDouble(10.25);
	list1.addDouble(25.75);
	list1.addDouble(30.25);
  list1.addDouble(35.25);
	list1.addDouble(40.25);
	list1.addDouble(45.25);
  list1.addDouble(50.75);
	list1.addDouble(55.75);
	list1.addDouble(60.25);
  list1.addDouble(65.75);

  cout<<"done!" <<endl;
  cout <<"********************************"<<endl;	 
  cout<< "Here are the ten elements of the current list1" <<endl;
  for (int i=0; i<list1.getNumDoubles(); i++)
		cout << list1.getDouble(i) << endl;
	cout << "and the capacity of the array is: " <<list1.getArraySize() << " elements so far"<< endl;
	cout <<"********************************"<<endl;	 
  cout << "Here is the number of doubles actually in the list1: " <<list1.getNumDoubles() << " elements"<< endl;
	cout << "and the capacity of the array is: " <<list1.getArraySize() << " elements so far"<< endl;

  cout<<"********************************"<<endl;	 
  cout << "Now adding adding five more elements to list1" << endl;
  list1.addDouble(80.25);
	list1.addDouble(90.25);
  list1.addDouble(100.25);
  list1.addDouble(80.25);
	list1.addDouble(90.25);

  cout <<"done!" <<endl;
  cout <<"********************************"<<endl;	 
  cout << "Here is the the current list1" <<endl;
  for (int j=0; j<list1.getNumDoubles(); j++)
		cout<<list1.getDouble(j)<<endl;
	
	cout <<"********************************"<<endl;	 
  cout << "Here is the number of doubles actually in the list: " << list1.getNumDoubles() << " elements"<< endl;
  cout << "and the capacity of the array is: " <<list1.getArraySize() << " elements so far"<< endl;
	cout <<"********************************"<<endl;	
  
	list1.removeDouble();
	list1.removeDouble();
	list1.removeDouble();

	cout << "Here is the the current list after remove three elements from the list" <<endl;
  for (int j=0; j<list1.getNumDoubles(); j++)
		cout << list1.getDouble(j)<< endl;
	
	cout <<"********************************"<<endl;	 
  cout << "Here is the number of doubles actually in the list: " <<list1.getNumDoubles() << " elements"<< endl;
  cout << "and the capacity of the array is: " <<list1.getArraySize() << " elements so far"<< endl;
	cout <<"********************************"<<endl;	
			 
  cout << "Assigning values from list1 to the list2 : " << endl;
  list2 = list1;

  cout << "Done! Here is the the current list2" <<endl;
  for (int z=0; z<list2.getNumDoubles(); z++)
		cout << list2.getDouble(z)<< endl;
	cout << "and the capacity of the array of List2 is: " <<list2.getArraySize() << " elements so far"<< endl;
	cout <<"********************************"<<endl;	 
  
  return 0;
}


