#include <iostream>
using namespace std;

int printCrap(int x, int y, double z) {
	int answer = x + y - z;
	return answer;
}

double printCraps(int x, int y, double z) {
	double answer = x + y - z;
	return answer;
}

string printCrapsh(string a, string b, string c) {
	cout << a << b << c;
}

int main()
{
	cout << printCrap(5, 10, 2.5) << endl;
	cout << printCraps(5, 10, 2.5) << endl;
	cout << printCrapsh(henlo, rittle, doggo) << endl; 
	system("pause");
	//return 0;
}