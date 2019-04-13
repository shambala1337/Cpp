#include <iostream>
using namespace std;

int main()
{

	cout << "Enter a value to recied an average." << endl;
	cout << "Or enter -1 to exit" << endl;
	
	double age = 0.0, allAges = 0.0, averageAge = 0.0, temp = 0.0, temp2 = 0.0;
	double count = 0;
	
		
	while (age != -1)
	{
		count++;
	
		cin >> age;
		allAges = age + allAges;

		averageAge = allAges / count;

		cout << "\n";
		cout << "Number of people entered: " << count << endl;
		cout << "Ages' Total " << allAges << endl;
		cout << "Average Age " << averageAge << endl;
		cout << "\n";

	}
	cout << "Process Completed! Thank you."; 

	system("pause");
	return 0;
}