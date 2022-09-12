
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
	string s;

    cout << "Enter String:\n";
	cin >> s;	

	cout << "Vowels in your string are: " << endl;

	int count = 0;
	
	for (int i = 0; i < s.length(); i++) {

		if (isVowel(s[i])) {
			cout << s[i] << " ";
			count++;
		}
	}

	if (count == 0)
		cout << "\nNo vowels in your string" << endl;
	else
		cout << "\nYou have " << count << " vowels in your string." << endl;

	
	cout << "\n\n";
	return 0;
}