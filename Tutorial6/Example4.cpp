#include <iostream>
using namespace std;

void swap(int &num1, int &num2)  //pass by reference
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}



int main()
{
    int x = 5, y = 7;
    cout << "Before calling the function: x = " << x << ", y = " << y << endl;

    swap(x, y);
    cout << "After calling the function: x = " << x << ", y = " << y << endl;

    return 0;
}


