#include <iostream>
using namespace std;

void myFunction(string name)
{
    cout << "Hello " << name << " from function" << endl;
}

void addition(int num1 = 1, int num2 = 1)
{
    int sum = num1 + num2;
    cout << "Sum is: " << sum << endl;
}



int main()
{
    string s = "John";

    myFunction(s);

    myFunction("David");

    addition(2, 3);  //5

    addition(3);  //4

    addition();  //2
    
    cout << "Code in main after calling the function" << endl;

    return 0;
}


