
#include <iostream>

using namespace std;

int main()
{
    const int size = 10;

    int numbers[size];


    //read values from the user
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

    //find the minimum and maximum values in the array

    int min = numbers[0];
    int max = numbers[0];

    for (int i = 1; i < size; i++)
    {
        //minimum
        if (numbers[i] < min)
            min = numbers[i];

        //maximum
        if (numbers[i] > max)
            max = numbers[i];
    }

    cout << "Minimum is: " << min << endl;
    cout << "Maximum is: " << max << endl;



    //Calculate the average value of the list

    int sum = 0;
    for (int i = 1; i < size; i++)
        sum = sum + numbers[i];

    cout << "Total summation of array values: " << sum << endl;

    double average = (double)sum / size;   //casting

    cout << "Average is: " << average << endl;



    return 0;
}
