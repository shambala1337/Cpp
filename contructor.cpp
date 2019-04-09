#include <iostream>
#include <string>
using namespace std;

//instead of using objects to call functions for effect, the constructor will execute things everytime the object is created
// typically people don't print things in constructors
// they usually set initial values for variables

class samsClass {
public:
	//CONSTRUCTOR. special function that gets called automatically as soon as you call 
	samsClass(string z) {
		setName(z);
	}

	void setName(string x) {name = x;}
	
	string getName() { return name; }
	

	private:
		string name;
};
			//constructors never have return type
			



int main()
{				// whenever you create an object from a class, each object has its own set of variables
	samsClass samsObject("This is a disaster");
	cout << samsObject.getName() << endl;
				// can create multiple objects from the same class
				// they dont overwrite each other
	samsClass samsObject2("okay tho");
	cout << samsObject2.getName() << endl;


	system("pause");
	return 1337;
}