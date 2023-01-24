#include <iostream>
#include <string>

using namespace std;
using std::cin;
using std::cout; 


int luhn_checksum = 856;

int main() 
{
	int luhn_checksum_third = luhn_checksum % 10 * 2;
	cout << luhn_checksum_third << endl;
	if (luhn_checksum_third >= 10 ) {
		int luhn_checksum_third_doubled = luhn_checksum_third % 10 + 1;
		cout << luhn_checksum_third_doubled << endl;  
	} else {

	}
	int luhn_checksum_third_doubled;
	int luhn_checksum_second = luhn_checksum / 10 % 10;
	cout << luhn_checksum_second << endl;
	if (luhn_checksum_second >= 10) {
		int luhn_checksum_second_doubled = luhn_checksum_second % 10 + 1;
		cout << luhn_checksum_second_doubled << endl;
	}
	int luhn_checksum_second_doubled;
	int luhn_checksum_first = luhn_checksum / 100 % 10 * 2;
	cout << luhn_checksum_first << endl;
	if (luhn_checksum_first >= 10) {
		int luhn_checksum_first_doubled = luhn_checksum_first % 10 + 1;
		cout << luhn_checksum_first_doubled << endl;
	}
	int luhn_checksum_first_doubled;
	if (((luhn_checksum_third_doubled + luhn_checksum_second_doubled + luhn_checksum_first_doubled) % 10) == 0) {
		cout << "Valid!" << endl;
	} else {
		cout << "Invalid!" << endl;
	}
	
}