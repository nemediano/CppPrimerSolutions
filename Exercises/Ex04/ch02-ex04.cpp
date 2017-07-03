#include <iostream>
#include <cstdlib>

int year_to_month(int years);

using namespace std;

int main(int argc, char* argv[]) {

	int years;
	int months;

	cout << "Enter your age: ";
	cin >> years;
	months = year_to_month(years);
	cout << "Your age in months is " << months << endl;

	return EXIT_SUCCESS;
}

int year_to_month(int years) {
	return 12 * years;
}