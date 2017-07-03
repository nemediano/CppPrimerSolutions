#include <iostream>
#include <cstdlib>

using namespace std;

double furlongs_to_yards(double furlongs);

int main(int argc, char* argv[]) {
	double furlongs;
	double yards;

	cout << "Enter the distance in furlongs ";
	cin >> furlongs;
	yards = furlongs_to_yards(furlongs);

	cout << furlongs << " furlongs are " << yards << " yards." << endl;

	return EXIT_SUCCESS;
}

double furlongs_to_yards(double furlongs) {
	return 220.0 * furlongs;
}