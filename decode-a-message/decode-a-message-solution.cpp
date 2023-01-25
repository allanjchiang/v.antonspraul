#include <iostream>
using std::cin;
using std::cout;

int main() 
{
	char outputCharacter;
	enum modeType {UPPERCASE, LOWERCASE, PUNCTUATION};
	modeType mode = UPPERCASE;
	char digitChar;
	do {
		digitChar = cin.get();
		int number = (digitChar - '0');
		digitChar = cin.get();
		cout << "Number read: " << number;
		switch (mode) {
		case UPPERCASE:
			number = number % 27;
			cout << ".Modulo 27: " << number << ".";
			if (number == 0) {
				cout << "Switch to LOWERCASE";
				mode = LOWERCASE;
			}
			break;
		case LOWERCASE: 
			number = number % 27;
			cout << ".Modulo 27: " << number << ".";
			if (number == 0) {
				cout << "Switch to PUNCTUATION";
				mode = PUNCTUATION;
			}
			break;
		case PUNCTUATION: 
			number = number % 9;
			cout << ".Modulo 9: " << number << ".";
			if (number == 0) {
				cout << "Switch to UPPERCASE";
				mode = UPPERCASE;
			}
			break;
		}
		cout << "\n";
	} while (number != -1);
}