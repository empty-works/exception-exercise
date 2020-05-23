#include <iostream>
#include <string>

void mightGoWrong() {

	bool error {true};

	if(error) {
		throw 8;
	}
}

int main() {

	try {
	
		mightGoWrong();
	}
	catch(int e) {
	
		std::cout << "Error: " << e << std::endl;
	}

	return 0;
}
