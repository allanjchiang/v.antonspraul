#include <iostream>
using std::cin;
using std::cout;

int main()
{
	cout << "Enter a two digit number: ";
	char digitChar1 = cin.get();
	char digitChar2 = cin.get();
	int digit1 = digitChar1 - '0';
	int digit2 = digitChar2 - '0';
	int overallNumber = digit1 * 10 + digit2;
	cout << "That number as an integer: " << overallNumber << "\n";
}