#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int rows = 3;
	const int cols = 4;

	int arr[rows][cols] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

	const int size = 12;
	int arr1d[size];

	//print all elements

	for (int i = 0; i < rows; i++) //goes over the rows
	{
		for (int j = 0; j < cols; j++) //goes over the coloumns
			cout << setw(4) << arr[i][j] << " ";

		cout << endl;
	}


	//Filling the 1 dim array from the 2 dim array
	for (int i = 0; i < rows; i++) //goes over the rows
	{
		for (int j = 0; j < cols; j++)
		{
			int index = i * cols + j;
			arr1d[index] = arr[i][j];
		}
	}


	for (int i = 0; i < size; i++)
		cout << arr1d[i] << " ";
	cout << endl;

	return 0;
}