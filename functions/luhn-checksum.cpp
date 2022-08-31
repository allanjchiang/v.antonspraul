#include <iostream>
#include <string>

using namespace std;
using std::cin;
using std::cout; 


int luhn_checksum = 123;

int main() 
{
	
	int luhn_checksum_third = luhn_checksum % 10 * 2;
	cout << luhn_checksum_third << endl;
	int luhn_checksum_second = luhn_checksum / 10 % 10;
	cout << luhn_checksum_second << endl;
	int luhn_checksum_first = luhn_checksum / 100 % 10 * 2;
	cout << luhn_checksum_first << endl;
	if ((luhn_checksum_third + luhn_checksum_second + luhn_checksum_first % 10) == 0) {
		cout << "Valid!" << endl;
	} else {
		cout << "Invalid!" << endl;
	}
	
}