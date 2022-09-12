#include <iostream>
using namespace std;

int max(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}

int min(int num1, int num2)
{
    if (num1 < num2)
        return num1;
    else
        return num2;
}

//takes an array as a parameter and returns the maximum value in the array
int maxOfArray(int array[], int size)
{
    int max = array[0];

    for (int i = 1; i < size; i++)
        if (array[i] > max)
            max = array[i];
    
    return max;
}

int minOfArray(int array[], int size)
{
    int min = array[0];

    for (int i = 1; i < size; i++)
        if (array[i] < min)
            min = array[i];
    
    return min;
}

int main()
{
    int x = 5, y = 7;

    int maxNum = max(x, y);

    cout << "max of " << x << " and " << y << " is: " << maxNum << endl;

    cout << "min of " << x << " and " << y << " is: " << min(x, y) << endl;

    const int size = 10;

    int array[size] = {3, 4, 7, 12, 2, 6, 17, 8, 9, 10};
    int array2[20] = {3, 4, 7, 12, 2, 6, 17, 8, 9, 10, 13, 24, 17, 12, 2, 6, 17, 8, 9, 10};

    cout << "sizeof(array): " << sizeof(array) << endl;  //40
    cout << "sizeof(array[0]): " << sizeof(array[0]) << endl;  //4
    cout << "sizeof(array2): " << sizeof(array2) << endl;  //80
    cout << "sizeof(array2[0]): " << sizeof(array2[0]) << endl;  //4

    int maxElement = maxOfArray(array, size);

    cout << "Maximum value in array is: " << maxElement << endl;

    
    cout << "Maximum value in array2 is: " << maxOfArray(array2, 20) << endl;

    cout << "Minimum value in array is: " << minOfArray(array, (sizeof(array) / sizeof(array[0]))) << endl;
    cout << "Minimum value in array2 is: " << minOfArray(array2, sizeof(array2) / sizeof(array2[0])) << endl;

    return 0;
}


