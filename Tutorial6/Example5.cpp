#include <iostream>
using namespace std;

void printByValue(int num)
{
    num++;
}

void printByRef(int &num)
{
    num++;
}


int main()
{
    int x = 5;

    cout << "Start: x = " << x << endl;  //5

    printByValue(x);
    cout << "After calling printByValue: x = " << x << endl;  //5

    printByRef(x);
    cout << "After calling printByRef: x = " << x << endl;   //6

    return 0;
}


