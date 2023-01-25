#include <iostream>
using std::cin;
using std::cout;

int main()
{
	cout << "Enter a number 1-26: ";
	int number;
	cin >> number;
	char outputCharacter;
	outputCharacter = number + 'A';
	cout << "Equivalent symbol: " << outputCharacter << "\n";
}