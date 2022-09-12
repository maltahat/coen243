
#include <iostream>
using namespace std;

int Square(int& num)
{
	num = num * num;
	return num;
}

int main()
{
	int x;

	x = 1;

	cout << "Enter a number: ";
	cin >> x;

	cout << "The square of " << x << " = " << Square (x) << endl;
	cout << "x = " << x << endl;


	

	return 0;
}
