#include <iostream>

using std::cin;
using std::cout;
int main() 
{
	char digitChar;
	do {
		digitChar = cin.get();
		int number = (digitChar - '0');
		digitChar = cin.get();
		while ((digitChar != 10) && (digitChar != ',')) {
			number = number * 10 + (digitChar - '0');
			digitChar = cin.get();
		}
		cout << "Number entered: " << number << "\n";
	} while (digitChar != 10);
}