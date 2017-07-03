#include <iostream>
#include <cstdlib>

double lightyears_to_astro(double light_years);

using namespace std;

int main(int argc, char* argv[]) {

	double astro_units;
	double light_years;

	cout << "Enter the number of light years: ";
	cin >> light_years;

	astro_units = lightyears_to_astro(light_years);
	cout << light_years << " light years = " << astro_units << " astronomical units" << endl;

	return EXIT_SUCCESS;
}

double lightyears_to_astro(double light_years) {
	return 63240.0 * light_years;
}