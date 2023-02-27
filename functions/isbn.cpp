#include <iostream>

using std::cin;
using std::cout;
using namespace std;

//idNumber = 123456789012

void sumDigits(long int idNumber){
	int firstDigit = idNumber / 100000000000 % 10;
	int secondDigit = idNumber / 10000000000 % 10;
	int secondDigitTripled = idNumber / 10000000000 % 10 * 3;
	int thirdDigit = idNumber / 1000000000 % 10;
	int fourthDigit = idNumber / 100000000 % 10;
	int fourthDigitTripled = idNumber / 100000000 % 10 * 3;
	int fifthDigit = idNumber / 10000000 % 10;
	int sixthDigit = idNumber / 1000000 % 10;
	int sixthDigitTripled = idNumber / 1000000 % 10 * 3;
	int seventhDigit = idNumber / 100000 % 10;
	int eighthDigit = idNumber / 10000 % 10;
	int eighthDigitTripled = idNumber / 10000 % 10 * 3;
	int ninthDigit = idNumber / 1000 % 10;
	int tenthDigit = idNumber / 100 % 10;
	int tenthDigitTripled = idNumber / 100 % 10 * 3;
	int eleventhDigit = idNumber / 10 % 10;
	int twelfthDigit = idNumber % 10;
	int twelfthDigitTripled = idNumber % 10 * 3;
	int sumOfIdNumber = firstDigit + secondDigitTripled + thirdDigit + fourthDigitTripled + fifthDigit + sixthDigitTripled + seventhDigit + eighthDigitTripled + ninthDigit + tenthDigitTripled + eleventhDigit + twelfthDigitTripled;

	cout << firstDigit << "(1) + " << secondDigit << "(3) + " << thirdDigit << "(1) + " << fourthDigit << "(3) + " << fifthDigit << "(1) + " << sixthDigit << "(3) + " << seventhDigit << "(1) + " << eighthDigit << "(3) + " << ninthDigit << "(1) + " << tenthDigit << "(3) + " << eleventhDigit << "(1) + " << twelfthDigit << "(3)";
	cout << "\n" << firstDigit << " + " << secondDigitTripled << " + " << thirdDigit << " + " << fourthDigitTripled << " + " << fifthDigit << " + " << sixthDigitTripled << " + " << seventhDigit << " + " << eighthDigitTripled << " + " << ninthDigit << " + " << tenthDigitTripled << " + " << eleventhDigit << " + " << twelfthDigitTripled << " = " << sumOfIdNumber;
}

int main()
{
	
	sumDigits(123456789012);

}