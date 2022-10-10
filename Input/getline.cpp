#include <iostream>
#include <iomanip>
using namespace std;

int main(void) {
	char name[20];
	char blood_type;

	cout << "name : ";
	cin.getline(name, sizeof(name)); // getline can input \0 \n

	cout << "Blood Type : ";
	cin >> blood_type;
	cout << name << " is " << blood_type << "type";

	return 0;
}