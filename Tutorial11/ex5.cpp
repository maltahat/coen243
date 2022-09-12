#include <iostream>
using namespace std;
#include <exception> 
using std::exception;

// DivideByZeroException objects should be thrown by functions // upon detecting division-by-zero exceptions
class DivideByZeroException : public exception
{
	private:
		char* errorMessage;
	public:
		DivideByZeroException()
		{
			errorMessage = "Attempted to divide by zero";
		}

		const char* what() const throw()
		{
			return errorMessage;
		}
}; // end class DivideByZeroException

int main() 
{
	// user-specified numerator
	// user-specified denominator // result of division
	int number1;
	int number2;
	double result;
	cout << "Enter two integers: ";
	// enable user to enter two integers to divide 
	cin >> number1 >> number2;

	// try block contains code that might throw exception
	// and code that should not execute if an exception occurs 
	try {
		
		if ( number2 == 0 )
			throw DivideByZeroException(); // terminate function

		result = number1 / number2;

		cout << "The result is: " << result << endl;

	}
	catch ( DivideByZeroException& divideByZeroException ) 
	{
		cout << "Exception occurred: " << divideByZeroException.what() << endl;
	}
	return 0; 
	}