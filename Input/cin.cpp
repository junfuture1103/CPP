#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	int year;
	char name[20];
	double height;
	char grade;

	cout << "==< INPUT > ==" << endl;
	cout << "YEAR : ";
	cin >> year;
	cout << "NAME : ";
	cin >> name;
	cout << "HIEGHT & GRADE : ";
	cin >> height >> grade;

	cout << "==< OUTPUT > ==" << endl;
	cout << year << "YEAR : " << ends << name << endl;
	cout << "HIEGHT : " << height << "cm" << endl;
	cout << "GRADE : " << grade << endl;

	return 0;
}