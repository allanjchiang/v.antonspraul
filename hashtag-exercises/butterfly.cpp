#include <iostream>

using std::cout;
using std::cin;

int main()
{
	for(int row = 1; row < 5; row++) {
		for(int spacesAtStart = 0; spacesAtStart < row - 1; spacesAtStart++){
			cout << " ";
		}
		for(int hashNum = 1; hashNum < row + 1; hashNum++){
			cout << "#";
		}
		for(int spacesInBetween = 1; spacesInBetween < 5 - row; spacesInBetween++){
			cout << "    ";
		}
		for(int hashNumAtEnd = 1; hashNumAtEnd < row + 1; hashNumAtEnd++){
			cout << "#";
		}
		cout << "\n";
	}

	for (int row = 1; row < 5; row++) {
		for (int spacesAtStart = 1; spacesAtStart < 4 - row; spacesAtStart++) {
			cout << " ";
		}
	}
}