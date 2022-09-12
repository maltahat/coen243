
#include <iostream>

using namespace std;

int main ()
{
    
    while (true)
    {
        cout << "What do you want to do?" << endl;
        cout << "[1] Find Min and Max for n numbers." << endl;
        cout << "[2] Calculate the total sum from 1 to n" << endl;
        cout << "[3] Exit" << endl;
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int min = 0;
            int max = 0;
            int number;
            int n;

            cout << "How many number you would like to enter? ";
            cin >> n;

            for (int i = 0; i < n; i++)
            {
                cout << "Please enter number " << i+1 << ": ";
                cin >> number;

                if (i == 0)
                    min = number;

                if (number < min)
                    min = number;

                if (number > max)
                    max = number;
            }

            cout << "Minimum = " << min << endl;
            cout << "Maximum = " << max << endl;
            break;
        }
        case 2:
        {
            int count, sum = 0;
            cout << "How many number you would like to enter? ";
            cin >> count;

            while (count > 0)
            {
                sum += count;
                count--;
            }

            cout << "Final Sum = " << sum << endl;
            break;
        }
        case 3:
            return 0;
            //break;
        default:
            cout << "Wrong choice" << endl;
            break;
        }


    }

    return 0;
    
}