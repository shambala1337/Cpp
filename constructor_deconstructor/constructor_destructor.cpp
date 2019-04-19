#include <iostream>
#include "sam.h" //main cpp, and class cpp headers should be the same
using namespace std;

int main() {

	sam samObject;
	sam *samPointer = &samObject;

	
	samObject.printCrap(); // object  uses dot seperator then class
	
			// use the arrow to point---> from pointers
	cout << endl;
	system("pause");
	return 0;
}

