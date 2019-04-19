#include "sam.h"
#include <iostream>
using namespace std;


// where all prototypes go

sam::sam() // constructor
{
	cout << "I am the constructor." << endl;
}
void sam::printCrap() { // copy this under your .h file in the public class
	cout << "Hexagons are gods " << endl;
}

sam::~sam() // deconstructor, cannot have return value or parameters
{
	cout << "I am the deconstructor" << endl;
}
