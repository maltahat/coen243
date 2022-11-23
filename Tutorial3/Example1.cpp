
#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout << "Please enter your grade: ";
    cin >> grade;
    
    switch (grade)
    {
    case 'A':
        cout << "Excellent" << endl;
        break;
    case 'B':
        cout << "Very good" << endl;
        break;
    case 'C':
        cout << "Good" << endl;
        break;
    case 'D':
        cout << "Pass" << endl;
        break;
    case 'F':
        cout << "Failed" << endl;
        break;
    default:
        cout << "Invalid grade" << endl;
    }
        
    return 0;
}
