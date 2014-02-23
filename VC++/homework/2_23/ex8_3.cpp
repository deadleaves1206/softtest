#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Please input a number:";
	cin >> a;
	cout << "Is this number larger than 60?" << endl;
	if (a > 60)
	{
		cout << "Yes!" << endl;
	}
	else
		cout << "No!" << endl;

	return 0;
}