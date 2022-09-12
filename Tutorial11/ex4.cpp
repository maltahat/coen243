#include <iostream> 
#include <string> 
using namespace std;

int main() 
{
	string sentence; 
	string str1, str2, str3; 
	
	try
	{
				//  0       8                25 
		sentence = "Testing string exceptions!"; //26 characters --> 0 - 25
		cout << "sentence = " << sentence << endl;

		cout << "sentence.length() = " << sentence.length() << endl;

		str1 = sentence.substr(8, 18);
		cout << "str1 = " << str1 << endl;

		str2 = sentence.substr(28, 7); 
		cout << "str2 = " << str2 << endl;

		str3 = "concatinating with. " + sentence;

		cout << "str3 = " << str3 << endl; 
	}
	catch (out_of_range& re) 
	{
		cout << "In the out_of_range catch" << " block: " << re.what() << endl;
	}
	catch (length_error& le) 
	{
		cout << "In the length_error catch" << " block: " << le.what() << endl;
	}

	cout << "Rest of program" << endl;
	return 0; 
}