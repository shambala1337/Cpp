#include <iostream>
#include "sam.h" //main cpp, and class cpp headers should be the same
using namespace std;

int main() {

	sam samObject;
	sam *samPointer = &samObject;
	
	samObject.printCrap(); // object  uses dot seperator then class
	samPointer->printCrap(); //whenever you use a pointer to access stuff inside a class you must use the arror operator
			// use the arrow to point---> from pointers
	cout << endl;
	system("pause");
	return 0;
}

