#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int size = 12;

	int arr[size] = { 16, 22, 6, 8, 10, 24, 14, 2, 18, 4, 20, 12 };
	
	//search the array for a certain value and print found\notfound. If found, print the index.

	int value = 10;

	bool match = false;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == value)
		{
			match = true;
			cout << "found at index: " << i << endl;
		}
	}

	if (match == false)
		cout << "not found" << endl;

	return 0;
}