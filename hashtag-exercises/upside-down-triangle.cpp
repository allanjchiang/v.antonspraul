#include <iostream>

using std::cin;
using std::cout;

int main()
{
	for(int row = 1; row <= 5; row++) {
		for(int space = 0; space < row - 1; space++) {
			for(int hash = 1; hash <= 6 - row; hash++) {
					cout << "##";
			}
			cout << " ";
		}
		cout << "\n";
	}
}