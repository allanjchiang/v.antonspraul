#include <iostream>

using std::cin;
using std::cout;
using namespace std;

//idNumber = 123456789012

void sumDigits(long int idNumber){
	int firstDigit = idNumber / 100000000000 % 10;
	int secondDigit = idNumber / 10000000000 % 10;
	int thirdDigit = idNumber / 1000000000 % 10;
	int sumOfIdNumber = firstDigit + secondDigit + thirdDigit;

	cout << firstDigit << " + " << secondDigit << " + " << thirdDigit << " + " << fourthDigit << " + " << fifthDigit << " + " << sixthDigit << " + " << seventhDigit << " + " << eighthDigit << " + " << ninthDigit << " + " << tenthDigit << " + " << eleventhDigit << " + " << twelfthDigit << " = " << sumOfIdNumber;
}

int main()
{
	
	sumDigits(123456789012);

}