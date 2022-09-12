#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int size = 12;
				//row           0               1                2
				//col  0  1  2  3   0   1   2   3   0   1   2    3
				//     0  1  2  3   4   5   6   7   8   9  10   11
	int arr1d[size] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24 };

	for (int i = 0; i < size; i++)
		cout << arr1d[i] << " ";
	cout << endl;


	const int rows = 3, coloumns = 4;
	int arr2d[rows][coloumns];

	for (int i = 0; i < size; i++)
	{
		int c = i % coloumns;  //which coloumn
		int r = i / coloumns; //(i - c) / rows;  //which row

		arr2d[r][c] = arr1d[i];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < coloumns; j++)
			cout << setw(3) << arr2d[i][j] << " ";

		cout << endl;
	}


	return 0;
}