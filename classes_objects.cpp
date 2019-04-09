#include <iostream>
using namespace std;

class samsClass {
	public:
		void coolSaying() {
			cout << "hats off to the mayor" << endl;
		}
};


int main()
{
	samsClass samsObject;
	samsObject.coolSaying();

	system("pause");
	return 0;
}