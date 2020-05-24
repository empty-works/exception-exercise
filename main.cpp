#include <iostream>
#include <string>
#include "CanGoWrong.h"

void mightGoWrong() {

	bool error {false};
	bool error2 {false};

	if(error) {
		throw "Hello. This is an error.";
	}
	if(error2) {
		throw std::string("Another error.");
	}
	CanGoWrong cgw;	
}

int main() {

	try {
	
		mightGoWrong();
	}
	catch(int e) {
		std::cout << "Error int: " << e << std::endl;
	}
	catch(char const *e) {
		std::cout << "Error c-style string: " << e << std::endl;
	}
	catch(std::string &e) {
		std::cout << "Error c++ string: " << e << std::endl;
	}
	catch(std::bad_alloc &e) {
		std::cout << "Bad allocation." << std::endl << std::endl;
	}

	return 0;
}
