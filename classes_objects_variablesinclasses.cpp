#include <iostream>
#include <string>

using namespace std;

class samsClass {
	public:	
		void setName(string x) {name = x;}
		string getName() { return name;}

	private:
			string name;
};

int main()
{
	samsClass bo;
	bo.setName("sam bam");
	cout << bo.getName() << endl;
	
	system("pause");
	return 0;
}