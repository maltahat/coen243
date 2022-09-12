// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
															//  Address     value
	int x = 20;            //x = 20                          // 3456EC      50
	int* p;

	p = &x;	 // p = address of x in memory = 3456EC

	cout << "value of x = " << x << endl;       //20
	cout << "address of x is: " << &x << endl;  //3456EC

	cout << "value of p is: " << p << endl;     //3456EC
	cout << "content of location pointed to by p: " << *p; //20

	cout << "\n----------------------------------" << endl;

	*p = 50;

	cout << "value of x = " << x << endl;     //50
	cout << "address of x is: " << &x << endl; //3456EC

	cout << "value of p is: " << p << endl; //3456EC
	cout << "content of location pointed to by p: " << *p << endl; //50
}
