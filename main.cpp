#include <iostream>
#include <string>

void mightGoWrong() {

	bool error {false};
	bool error2 {true};

	if(error) {
		throw "Hello. This is an error.";
	}
	if(error2) {
		throw std::string("Another error.");
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
	catch(std::string e) {
		std::cout << "Error c++ string: " << e << std::endl;
	}

	return 0;
}
