
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;
	
	int i;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}

	cout << "sum = " << sum << endl;
	cout << "i = " << i << endl;

	return 0;
}
