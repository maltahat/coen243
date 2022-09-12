#include <iostream>
#include "math.h"
#include "MyLibrary.h"
using namespace std;

int main()
{
    
    Rectangle rec1(4, 2, "rec1");

    Rectangle rec2(10, 8, "rec2");

    Rectangle rec3(18, 6, "rec3");

    rec1.Print();
    rec2.Print();
    rec3.Print();

    cout << "Area of " << rec1.GetName() << " = " << rec1.CalculateArea() << endl;
    cout << "Area of " << rec2.GetName() << " = " << rec2.CalculateArea() << endl;
    cout << "Area of " << rec3.GetName() << " = " << rec3.CalculateArea() << endl;

    cout << endl; 

    cout << "Peremter of " << rec1.GetName() << " = " << rec1.CalculatePeremeter() << endl;
    cout << "Peremter of " << rec2.GetName() << " = " << rec2.CalculatePeremeter() << endl;
    cout << "Peremter of " << rec3.GetName() << " = " << rec3.CalculatePeremeter() << endl;

    cout << endl;

    cout << "Diagonal length of " << rec1.GetName() << " = " << rec1.CalculateDiagonal() << endl;
    cout << "Diagonal length of " << rec2.GetName() << " = " << rec2.CalculateDiagonal() << endl;
    cout << "Diagonal length of " << rec3.GetName() << " = " << rec3.CalculateDiagonal() << endl;

    cout << endl;
    
    return 0;
}
