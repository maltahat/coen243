// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	Point()
	{
		x = 0;
		y = 0;
	}

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void Print()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}

	void SetX(int x)
	{
		this->x = x;
	}

	void SetY(int y)
	{
		this->y = y;
	}
};

int main()
{
	int x = 5;
	double y = 4.5;

	int* p;
	p = &x;

	cout << "value of x = " << x << endl;
	cout << "address of x = " << &x << endl;
	cout << "address of y = " << &y << endl;
	cout << "address of p = " << &p << endl;
	cout << "value of p = " << p << endl;
	cout << "value pointed to by p = " << *p << endl;  //5

	p = new int(7);
	//*p = 7;

	double* pp = new double(6.8);
	cout << "value of pp = " << pp << endl;
	cout << "value pointed to by pp = " << *pp << endl;

	Point pnt1;
	Point pnt2(3, 7);

	cout << "address of pnt1 = " << &pnt1 << endl;
	cout << "address of pnt2 = " << &pnt2 << endl;

	cout << "pnt1 = ";
	pnt1.Print();

	cout << "pnt2 = ";
	pnt2.Print();

	Point* pntPointer;

	pntPointer = new Point;

	cout << "pntPointer point = ";
	(*pntPointer).Print();

	(*pntPointer).SetX(10);
	(*pntPointer).SetY(20);

	cout << "pntPointer point = ";
	(*pntPointer).Print();

	cout << "pntPointer point = ";
	pntPointer->SetX(6);
	pntPointer->SetY(15);
	pntPointer->Print();

	delete pntPointer;

	pntPointer = new Point(2, 4);

	pntPointer->Print();

	cout << "before delete / value of pntPointer = " << pntPointer << endl;

	delete pntPointer;

	cout << "after delte / value of pntPointer = " << pntPointer << endl;


}