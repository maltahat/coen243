#include <iostream> 
using namespace std;

int main () 
{
	int a, b, c;
	try 
	{
		cout << "Enter first number: ";
		cin >> a;

		cout << "Enter second number: "; 
		cin >> b;
		
		if (b == 0)
			throw "Divide by zero exception";  //Exception ...

		c = a / b; 

		cout << c << endl;

	}
	catch (const char* str) 
	{
		cout << "Exception: " << str << endl;
	}


	cout << "You reached the rest of the program" << endl;

	return 0; 
}