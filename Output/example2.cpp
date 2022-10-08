#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	double giraffe = 2.9;
	double monkey = 0.45;
	cout << fixed << setprecision(1);
	cout << setw(5) << giraffe << setw(5) << monkey;
	cout << setw(5) << (giraffe + monkey) / 2.0;

	return 0;
}