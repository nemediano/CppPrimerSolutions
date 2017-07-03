#include <iostream>
#include <cstdlib>

void print_time(int hours, int minutes);

using namespace std;

int main(int argc, char* argv[]) {

	int hours;
	int minutes;
	
	cout << "Enter the number of hours: ";
	cin >> hours;

	cout << "Enter the number of minutes: ";
	cin >> minutes;

	print_time(hours, minutes);

	return EXIT_SUCCESS;
}

void print_time(int hours, int minutes) {
	cout << "Time: " << hours << ":" << minutes << endl;
}