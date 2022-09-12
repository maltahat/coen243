#include <iostream>
using namespace std;

void DrawFunction(double num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
            cout << "*" << " ";
        
        cout << endl;
    }
}

int main()
{
    double number;

    cout << "Enter a number: ";
    cin >> number;

    DrawFunction(number);

    return 0;
}
