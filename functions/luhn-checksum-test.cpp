#include <iostream>
#include <string>

using namespace std;
using std::cin;
using std::cout; 

int main() {
	cout << "Enter a number:";
	char digit;
	while (true){
		digit = cin.get();
		cout << int(digit) << "";
	}
}