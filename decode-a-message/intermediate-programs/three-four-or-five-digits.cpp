#include <iostream>
using std::cin;
using std::cout;

int main()
{
	cout << "Enter a number with 3, 4 or 5 digits: ";
	char digitChar = cin.get();
	int number = (digitChar - '0') * 100;
	digitChar = cin.get();
	number += (digitChar - '0') * 10;
	digitChar = cin.get();
	number += (digitChar - '0');
	digitChar = cin.get();
	if (digitChar == 10) {
		cout << "Your 3 digit number is: " << number << "\n";
	} else {
		number = number * 10 + (digitChar - '0');
		digitChar = cin.get();
		if (digitChar == 10) {
			cout << "Your 4 digit number is: " << number << "\n";
		} else {
			number = number * 10 + (digitChar - '0');
			cout << "Your 5 digit number is: " << number << "\n";
		}
	}

}