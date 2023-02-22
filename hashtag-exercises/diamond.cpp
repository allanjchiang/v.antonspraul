#include <iostream>

using std::cin;
using std::cout;

int main()
{
	for(int row = 1; row < 5; row++){
		for (int space = 1; space < 5 - row; space++){
			cout << " ";
		}
		for (int hashNum = 1; hashNum < row + 1; hashNum++) {
			cout << "##";
		}
		cout << "\n";
	}
	for(int row = 1; row < 5; row++) {
		for (int space = 0; space < row - 1; space++){
			cout << " ";
		}
		for (int hashNum = 1; hashNum < 6 - row; hashNum++) {
			cout << "##";
		}
		cout << "\n";
	}
}