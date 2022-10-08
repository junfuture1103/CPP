#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	//cout << fixed; -> 3.1 , 2e+02
	cout << fixed; // fixed -> make cout can print float .6%f
	cout << setprecision(2);
	cout << 3.1415926 << endl;
	cout << 198.245 << endl;

	return 0;
}