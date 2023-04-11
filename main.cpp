#include "smplHashFoo.h"

int main(int argc, char** argv) {
	string input = "_";

	do {
		cout << "Введите строку: ";
		cin >> input;
		cout << "Наивный хэш строки " << input << " = " << simple_string_hash(input) << endl;
	} while (input != "exit");

	return 0;
}