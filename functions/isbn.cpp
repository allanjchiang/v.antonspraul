#include <iostream>

using std::cin;
using std::cout;
using namespace std;

//idNumber = 123456789012

void sumDigits(long int idNumber){
	int firstDigit = idNumber / 100000000000 % 10;
	int secondDigit = idNumber / 10000000000 % 10;
	int thirdDigit = idNumber / 1000000000 % 10;
	int fourthDigit = idNumber / 100000000 % 10;
	int fifthDigit = idNumber / 10000000 % 10;
	int sixthDigit = idNumber / 1000000 % 10;
	int seventhDigit = idNumber / 100000 % 10;
	int eighthDigit = idNumber / 10000 % 10;
	int ninthDigit = idNumber / 1000 % 10;
	int tenthDigit = idNumber / 100 % 10;
	int eleventhDigit = idNumber / 10 % 10;
	int twelfthDigit = idNumber % 10;
	int sumOfIdNumber = firstDigit + secondDigit + thirdDigit + fourthDigit + fifthDigit + sixthDigit + seventhDigit + eighthDigit + ninthDigit + tenthDigit + eleventhDigit + twelfthDigit;

	cout << firstDigit << " + " << secondDigit << " + " << thirdDigit << " + " << fourthDigit << " + " << fifthDigit << " + " << sixthDigit << " + " << seventhDigit << " + " << eighthDigit << " + " << ninthDigit << " + " << tenthDigit << " + " << eleventhDigit << " + " << twelfthDigit << " = " << sumOfIdNumber;
}

int main()
{
	
	sumDigits(123456789012);

}