#include<iostream>
#include<cmath>

using namespace std;

const double G = 6.673e-8;  // is the gravitational attractive constant and its unit is (cm^3)/g.sec^2)

double calculateGAF(double m1, double m2, double d);  // function that calculate the gravitational attractive force 
						      // having as parameter mass1, mass2, and the distance between both bodies

int main(){
  double mass1, mass2, distance;

  cout << "********* Chapter 3 Exercise 4 **********" << endl;
  cout << "Calculating the gravitational attractive force" << endl;

  //entering data for the formula
  cout << "Enter the mass of the first body: " << endl;
  cin>> mass1;
  cout << "Enter the mass of the second body: " << endl;
  cin>> mass2;
  cout << "Enter the distance that separatess both bodies: " << endl;
  cin>> distance;
  
  //printing the result
  cout<< "Considering G is the universal gravitational constant with the value of " << G << endl;
  cout << "The gravitational attractive force between these two bodies of masses " << mass1 << " and " << mass2 << endl;
  cout<<  "The value of F is: "<< calculateGAF(mass1, mass2, distance) << " dynes." << endl;  // as a reference data, one dyne equals g.cm/sec^2, if we make the math, the answer tecnically should be in (cm^4)/(sec4). For purpose of this example, I am defining this as a dynes.

  return 0;
}

double calculateGAF(double m1, double m2, double d){
  double GAF;
  GAF = (G * m1 * m2)/(pow(d ,2));  //main formula to find the gravitational attractive force.
  return GAF;
}

