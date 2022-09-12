#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int size = 12;

	int arr[size] = { 16, 22, 6, 8, 10, 24, 14, 2, 18, 4, 20, 12 };
	
	//print before sorting
	cout << "arr = [";
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << "]" << endl;

	//sort ascending - selection sort

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] > arr[i])
			{
				//swap
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	//print after sorting
	cout << "arr = [";
	for (int i = 0; i < size; i++)
		cout << arr[i] << ", ";
	cout << "]" << endl;

	return 0;
}