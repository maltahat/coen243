
#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	//using while loop
	int counter = 1;
	while (counter <= 100)
	{
		sum = sum + counter;
		counter++;
	}

	cout << "sum = " << sum << endl;
	cout << "Counter = " << counter << endl;

	return 0;
}
