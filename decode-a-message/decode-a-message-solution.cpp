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
		while ((digitChar != 10) && (digitChar != ',')) {
			number = number * 10 + (digitChar - '0');
			digitChar = cin.get();
		}
		switch (mode) {
		case UPPERCASE:
			number = number % 27;
			outputCharacter = number + 'A' - 1;
			if (number == 0) {
				mode = LOWERCASE;
				continue;
			}
			break;
		case LOWERCASE: 
			number = number % 27;
			outputCharacter = number + 'a' - 1;
			if (number == 0) {
				mode = PUNCTUATION;
				continue;
			}
			break;
		case PUNCTUATION: 
			number = number % 9;

			if (number == 0) {
				cout << "Switch to UPPERCASE";
				mode = UPPERCASE;
			}
			break;
		}
		cout << "\n";
	} while (number != -1);
}