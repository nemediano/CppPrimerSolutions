#include <iostream>
#include <cstdlib>

void first_message(void);
void second_message(void);

using namespace std;

int main(int argc, char* argv[]) {
	
	first_message();
	first_message();

	second_message();
	second_message();


	return EXIT_SUCCESS;
}

void first_message(void) {
	cout << "Three blind mice" << endl;
}

void second_message(void) {
	cout << "See how they run" << endl;
}