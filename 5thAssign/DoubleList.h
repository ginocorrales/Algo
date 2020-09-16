#ifndef _DOUBLELIST_H_
#define _DOUBLELIST_H_
/*
Author: Gino P. Corrales-Delgado
IT 279 - Assign 5

This is the header of the DoubleList Class. This class manages  dynamic array of doubles, also includes several functions to
test the class, such as adding a double, remove it, sending the index and returning the value of the element, and returning
the number of doubles that actually in the list
*/
#include <iostream>
using namespace std;

class DoubleList{

  public:

	  DoubleList();  													 // constructor of the class
    DoubleList(const DoubleList& dlObject);  // constructor overload
		~DoubleList();													 // destructor of the class

		void addDouble(double n);  	 // adds a double to the end of the list
		void removeDouble(); 				 // remove the last double in the list
		double getDouble(int index); // accept an int parameter and returns the value of the double at that index
		double getNumDoubles(); 		 // returns the number of doubles actually in the list

		DoubleList& operator=(const DoubleList& rightSide);  // overload assign operator

		void setArraySize();				 // set the size of the array
		int getArraySize();					 // get the size of the array
		int getCurrentPosition();		 // get the current position in the size of the array

  private:
    double *arrayDoubles;	// the array of doubles numbers
		int currentPosition;  // current position (index of the array)
    int arraySize;				// size of the array

};

#endif
