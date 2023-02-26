#include <iostream>

using std::cin;
using std::cout;
using namespace std;

//idNumber = 123456789012

void sumDigits(long int idNumber){
	int firstDigit = idNumber / 100000000000 % 10;
	int secondDigit = idNumber / 10000000000 % 10;
	int sumOfIdNumber = firstDigit + secondDigit;

	cout << firstDigit << " + " << secondDigit << " = " << sumOfIdNumber;
}

int main()
{
	
	sumDigits(123456789012);

}