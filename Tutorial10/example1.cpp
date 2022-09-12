#include <iostream>
using namespace std;

int main()
{
    int rows = 3, cols = 4;

    int **p = new int*[rows];

    for (int i = 0; i < rows; i++)
        p[i] = new int[cols];

    p[0][0] = 2;    p[0][1] = 3;   p[0][2] = 5;  p[0][3] = 6;
    p[1][0] = 17;   p[1][1] = 6;   p[1][2] = 13; p[1][3] = 2;
    p[2][0] = 1;    p[2][1] = 3;   p[2][2] = 4;  p[2][3] = 7;

    cout << "The values of the matrix are: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << p[i][j] << "\t";

        cout << endl;
    }

    //delete the arrays

    for (int i = 0; i < rows; i++)
        delete[] p[i];

    delete[] p;

    cout << endl;
    return 0;
}
