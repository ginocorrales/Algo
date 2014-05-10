/*
Author: Gino P. Corrales-Delgado
IT 279 - Assign 5

Here is the implementation the DoubleLst class.
*/
#include "DoubleList.h"

DoubleList::DoubleList(){	//Class constructor
  this-> arrayDoubles = new double [10];
  this-> arraySize  = 10;
  this-> currentPosition = 0;
  	
}

DoubleList::DoubleList(const DoubleList& dlObject) {// copy constructor
  arrayDoubles = new double [10];
  for(int i=0; i < currentPosition; i++)
		arrayDoubles[i] = dlObject.arrayDoubles[i]; 
}

DoubleList::~DoubleList(){
	delete [] arrayDoubles;
	arrayDoubles = NULL;
}

void DoubleList::addDouble(double n){  // adds a double to the end of the list, when a double 
																			 // is added and there is not room for it, the class must
																			 // allocate space for an additional 10 doubles.
	if(currentPosition == arraySize)  //if the array is full, allocate space for 10 more doubles
  {
		this-> arraySize = this->arraySize + 10;  // the new real size is the double of how it was             
	  double tempArray[this-> arraySize];  				// create temp array with the new size
    for(int i = 0; i < currentPosition; i++) {
			tempArray[i] = this-> arrayDoubles[i];
		} 
    delete []arrayDoubles; 
    arrayDoubles = NULL;  
    
    this-> arrayDoubles = new double[this->arraySize]; //copy the temp array to the original array
	  for(int i = 0; i < arraySize; i++){ 
		  this->arrayDoubles[i] = tempArray[i];
		}      
	  // after the array is resized and pass back all elements, now we procede to add n to the end of the array
    this-> arrayDoubles[this-> currentPosition] = n;
    this-> currentPosition ++;
             
  }
  else{  // the array has available spots, so just add 'n' to the end of th array
		this-> arrayDoubles[this-> currentPosition] = n;
    this-> currentPosition ++;
  } 
}

void DoubleList::removeDouble(){  // remove the last double in the list
	this-> currentPosition--; 	
	//return this-> arrayDoubles[currentPosition];
}

double DoubleList::getDouble(int index){ // accept an int parameter and returns the value of the double at that index   
	return this-> arrayDoubles[index];
}

// Setters and getters
double DoubleList::getNumDoubles(){
	return this-> currentPosition;
}
 
void DoubleList::setArraySize(){
	this->arraySize=arraySize;
}

int DoubleList::getArraySize(){
	return this -> arraySize; 
}

int DoubleList::getCurrentPosition(){
	return currentPosition;
}

DoubleList& DoubleList::operator=(const DoubleList& rightSide){ //overload assignment operator
	if(this->arraySize != rightSide.arraySize){
		delete [] arrayDoubles;
		arrayDoubles = new double[rightSide.arraySize];	
	}
  currentPosition = rightSide.currentPosition;  
  arraySize = rightSide.arraySize;	
	for(int i=0; i < currentPosition; i++)
		arrayDoubles[i] = rightSide.arrayDoubles[i];
	return *this;	
}

