// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isVowel(char ch) {
	if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')
		|| (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
		return true;
	else
		return false;
}

int main()
{
	const int size = 100;
	char *p = new char[size];

    cout << "Enter String:\n";
	cin >> p;	

	cout << "Vowels in your string are: " << endl;

	int count = 0;
	for (int i = 0; i < size; i++) {

		if (p[i] == '\0')
			break;

		if (isVowel(p[i])) {
			cout << p[i] << " ";
			count++;
		}
	}

	if (count == 0)
		cout << "No vowels in your string" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
