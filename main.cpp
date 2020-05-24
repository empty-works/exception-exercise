#include <iostream>
#include <string>
#include "CanGoWrong.h"
#include "CustomException.h"
void mightGoWrong() {

	bool error {false};
	bool error2 {false};
	bool error3 {true};

	if(error) {
		throw "Hello. This is an error.";
	}
	if(error2) {
		throw std::string("Another error.");
	}
	//CanGoWrong cgw;	
	if(error3) {
		CustomException e;
	       	throw e;	
	}	
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
	catch(CustomException &e) {
		std::cout << e.what() << std::endl;	
	}

	return 0;
}
