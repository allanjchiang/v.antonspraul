#include <iostream>

using std::cout;
using std::cin;

int main()
{
	for(int row = 1; row < 6; row++) {
		for (int hashNum = 0; hashNum < 3 - abs(3 - row); hashNum++) {
			cout << "#";
		}
	}
}