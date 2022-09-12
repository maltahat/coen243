
#include <iostream>

using namespace std;

int main()
{
    int x1 = 10;
    int x2 = 5;
    int x3 = 6; 
    int x4 = 11;
    int x5 = 4;
                                        //           0   1    2   3    4    5    6   7   8   9
    int myArray[10] = {2, 5, 6, 7, 8};   //myArray = [2  ,5  , 6 , 7  , 8,   ,    ,   ,   ,   ]

    cout << "Value at location 0: " << myArray[0] << endl;
    cout << "Value at location 3: " << myArray[3] << endl;

                        //           0   1    2   3    4
    myArray[1] = 10;    //myArray = [2  ,10  , 6 , 7  , 8  ]

    cout << "Value at location 1: " << myArray[1] << endl;

    
    cout << "Without Loop: Value of array are: ";
    cout << myArray[0] << " ";
    cout << myArray[1] << " ";
    cout << myArray[2] << " ";
    cout << myArray[3] << " ";
    cout << myArray[4] << " ";
    cout << myArray[5] << " ";
    cout << myArray[6] << " ";
    cout << myArray[7] << " ";
    cout << myArray[8] << " ";
    cout << myArray[9] << " ";
    cout << endl;


    cout << "With Loop Value of array are: ";

    for (int i = 0; i < 10; i++)
        cout << myArray[i] << " ";
    
    cout << endl;


    string days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

    // string days[7] = {};

    return 0;
}
