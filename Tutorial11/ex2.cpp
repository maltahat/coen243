#include <iostream> 
#include <string.h>

using namespace std;

int main () 
{
	string name;
	int age;

	try 
	{
		cout << "Enter you name: ";
		cin >> name;

		if (name.compare("exit") == 0)
			throw name;

		cout << "Enter you age (>0): "; 
		cin >> age;

		if (age <= 0)
			throw age;

	} 
	catch (string str) 
	{
		cout << "Exception, name cannot be: " << str << endl;
	}
	catch (int x) 
	{
		cout << "Age:" << x << " should be > 0" << endl; 
	}
	catch (...)
	{
		cout << "Exception..." << endl;
	}
	

	cout << "You reached the rest of the program" << endl;

	return 0; 
}