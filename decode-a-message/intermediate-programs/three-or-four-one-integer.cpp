#include <iostream>
using std::cin;
using std::cout;

int main()
{
	cout << "Enter a three or four digit number: ";
	char digitChar = cin.get();
	int number = (digitChar - '0') * 100;
	digitChar = cin.get();
	number += (digitChar - '0') * 10;
	digitChar = cin.get();
	number += (digitChar - '0');
	digitChar = cin.get();
	if (digitChar == 10) {
		cout << "The three digit number is: " << number << "\n";
	} else {
		number = number * 10 + (digitChar - '0');
		cout << "The four digit number is: " << number << "\n";
	}
}