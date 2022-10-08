#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	cout << "12345678901234567890\n";
	cout << setw(5) << 10; // setw -> %5d
	cout << setw(5) << 20; // setw -> %5d
	cout << setw(7) << 3.14; // setw -> %7f

	return 0;
}