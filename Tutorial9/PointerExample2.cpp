
#include <iostream>
using namespace std;

int main()
{
	int numbers[5];

	numbers[0] = 2;  
	numbers[1] = 5;
	numbers[2] = 57;
	numbers[3] = 30; //*   pnt
	numbers[4] = 18;

	int* pnt = numbers;

	cout << "address of first element: " << & numbers[0] << endl;
	cout << "value of p is: " << pnt << endl; //the address of first element

	cout << "content of location pointed to by pnt: " << *pnt << endl; //2
	cout << "content of location pointed to by pnt+1: " << *(pnt+1) << endl; //5
	cout << "content of location pointed to by pnt+2: " << *(pnt + 2) << endl; //57

	cout << "\n----------------------------------" << endl;

	pnt += 3; //pnt = pnt + 3
	cout << "value of p is: " << pnt << endl; // 12 + previous 

	cout << "content of location pointed to by pnt: " << *pnt << endl; //30
	cout << "content of location pointed to by pnt+1: " << *(pnt + 1) << endl; //18
	cout << "content of location pointed to by pnt-1: " << *(pnt - 1) << endl; //57
	cout << "content of location pointed to by pnt-2: " << *(pnt - 2) << endl; //5
}
