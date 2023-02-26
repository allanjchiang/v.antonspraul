#include <iostream>

using std::cin;
using std::cout;

//idNumber = 16

void sumDigits(int idNumber){
	cout << idNumber % 10 + idNumber / 10 % 10;
}

int main()
{
	
	sumDigits(16);

}