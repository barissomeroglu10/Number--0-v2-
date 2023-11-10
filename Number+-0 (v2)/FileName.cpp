/* 
?n this code, we will get a number from the user and our code will say these: Number is positive, negative or zero.

Coder: Bar?? Somero?lu
Date: 10.11.23 / 10.10 p.m.
Location: Wan

*/



#include <iostream>

using namespace std;

int main()
{
	int Number;

	cout << "Please Enter the Number: ";
	cin >> Number;

	if (Number > 0)
	{
		cout << "Your Number is Positive!" << endl;
	}

	else if (Number < 0)
	{
		cout << "Your Number is Negative!" << endl;
	}

	else 
	{
		cout << "Your Number is Zero!" << endl;
	}

	return 0;
}