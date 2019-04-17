#include <iostream>
using namespace std;

int main() {

	int sam[5];
	int *bp0 = &sam[0];
	int *bp1 = &sam[1];
	int *bp2 = &sam[2];

	cout << "bp0 is at location " << bp0 << endl;
	cout << "bp0 is at location " << bp1 << endl;
	cout << "bp0 is at location " << bp2 << endl;

	bp0 += 2; // does not change the memory address, only changes the elemnt its pointing to
	cout << "bp0 is now at " << bp0 << endl; 
	cout << "bp2 is now at " << bp2 << endl;
	cout << "bp1 is now at " << bp1 << endl;




	cout << endl;
	system("pause");
	return 0;
}