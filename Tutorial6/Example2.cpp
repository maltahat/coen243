#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    cout << "Calling int version" << endl;
    int sum = num1 + num2;
    return sum;
}

double sum(double num1, double num2)
{
    cout << "Calling double version" << endl;
    double sum = num1 + num2;
    return sum;
}

int main()
{
    
    int s = sum(2, 3);

    cout << "sum is: " << s << endl;

    int x = 5, y = 7;

    s = sum(x, y);

    cout << x << " + " << y << " = " << s << endl;      //5 + 7 = 12

    double x1 = 5.5, y1 = 7.5;

    double s1 = sum(x1, y1);

    cout << x1 << " + " << y1 << " = " << s1 << endl;      //5.5 + 7.5 = 12

    cout << "Code in main after calling the function" << endl;

    return 0;
}


