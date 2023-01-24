#include <iostream>
using std::cin;
using std::cout;

int main()
{
	cout << "Enter a digit with any length: ";
	char digitChar = cin.get();
	int number = (digitChar - '0');
	digitChar = cin.get();
	while (digitChar != 10) {
		number = number * 10 + (digitChar - '0');
		digitChar = cin.get();
	}
	cout << "Number entered: " << number << "\n";
	
}