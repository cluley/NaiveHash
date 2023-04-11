#include "smplHashFoo.h"

int simple_string_hash(std::string str) {
	int hash(0);

	int length = str.length();

	for (int i = 0; i < length; i++) {
		hash += str[i];
	}

	return hash;
}