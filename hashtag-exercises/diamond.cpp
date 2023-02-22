#include <iostream>

using std::cin;
using std::cout;

int main()
{
	for(int row = 1; row < 5; row++){
		for (int space = 1; space < 4 - row; space++){
			cout << " ";
		}
	}
}