#include <iostream>

using std::cin;
using std::cout;
using namespace std;

//idNumber = 123456789012

void sumDigits(int idNumber){
	int firstDigit = idNumber / 10000000000 % 10;
	int sumOfIdNumber = firstDigit;

	cout << firstDigit << " + " << "placeholder" << " = " << sumOfIdNumber;
}

int main()
{
	
	sumDigits(16);

}