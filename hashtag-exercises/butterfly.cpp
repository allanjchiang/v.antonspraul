#include <iostream>

using std::cout;
using std::cin;

int main()
{
	for(int row = 1; row < 5; row++) {
		for(int spacesAtStart = 0; spacesAtStart < row - 1; spacesAtStart++){
			cout << " ";
		}
	}
}