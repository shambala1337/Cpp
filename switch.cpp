#include <iostream>
using namespace std;

int main()
{
	int age = 21;

	switch (age) {
	case 16:
		cout << "You can drive now!" << endl;
		break;
	case 18:
		cout << "Go buy some lotto tickets!" << endl;
		break;
	case 21:
		cout << "Go buy some beer!" << endl;
		break;
	default:
		cout << "Happy to be alive" << endl;
		break;
	}

	system("pause");
	return 0;
}