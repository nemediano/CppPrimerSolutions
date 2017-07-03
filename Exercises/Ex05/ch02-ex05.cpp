#include <iostream>
#include <cstdlib>

double celsius_to_fahrenheit(double degCel);

using namespace std;

int main(int argc, char* argv[]) {

	double celsius;
	double fahrenheit;

	cout << "Please enter a Celsius value: ";
	cin >> celsius;

	fahrenheit = celsius_to_fahrenheit(celsius);
	cout << celsius << " degree Celsius is " << fahrenheit << " degrees Fahrenheit" << endl;

	return EXIT_SUCCESS;
}

double celsius_to_fahrenheit(double degCel) {
	return 1.8 * degCel + 32.0;
}