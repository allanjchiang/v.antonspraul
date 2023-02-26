#include <iostream>

using std::cin;
using std::cout;
using namespace std;

//idNumber = 16

void sumDigits(int idNumber){
	int sumOfIdNumber = idNumber % 10 + idNumber / 10 % 10;

	cout << idNumber % 10 << " + " << idNumber / 10 % 10 << " = " << sumOfIdNumber;
}

int main()
{
	
	sumDigits(16);

}