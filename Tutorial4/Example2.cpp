
#include <iostream>

using namespace std;

int main()
{
    const int size = 10;

    double numbers[size];

    cout << "Please enter" << size << " numbers: " << endl;
    
    for (int i = 0; i < size; i++)
    {
        cout << "Number " << i << ": ";
        cin >> numbers[i];
    }

    //print all array values
    cout << "numbers = [";

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i];

        if (i != size - 1)
            cout << ", ";
    }

    cout << "]" << endl;



    //y = 2 * x + 1
    for (int i = 0; i < size; i++)
        numbers[i] = 2 * numbers[i] + 1;


    //print all array values
    cout << "After applying the function, numbers = [";

    for (int i = 0; i < size; i++)
    {
        cout << numbers[i];

        if (i != size - 1)
            cout << ", ";
    }

    cout << "]" << endl;




    return 0;
}
