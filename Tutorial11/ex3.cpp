#include <iostream> 
#include <string.h>

using namespace std;

void test(int a) 
{
	if (a >= 10) 
		throw a;
}

int main() 
{
	int a;
	
	cout << "Enter a (< 10): \n"; 
	cin >> a; 

	try 
	{
		test(a);
		cout << a << " is less than 10\n";
	} 
	catch (int i) 
	{
		cout << a << " is greater than or equal to 10\n";
	}
	return 0; 
}