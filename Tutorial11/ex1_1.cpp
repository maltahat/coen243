#include <iostream> 
using namespace std;

int main () 
{
	int a, b, c;

	cout << "Enter first number: ";
	cin >> a;

	cout << "Enter second number: "; 
	cin >> b;

	c = a / b; //Exception ....

	cout << c << endl;

	cout << "You reached the rest of the program" << endl;

	return 0; 
}