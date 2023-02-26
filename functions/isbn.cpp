#include <iostream>

using std::cin;
using std::cout;

//idNumber = 16

void sumDigits(int idNumber){
	int sumOfIdNumber = idNumber % 10 + idNumber / 10 % 10;
	cout << sumOfIdNumber;
}

int main()
{
	
	sumDigits(16);

}