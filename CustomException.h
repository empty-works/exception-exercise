#ifndef CUSTOM_EXCEPTION_H_
#define CUSTOM_EXCEPTION_H_

class CustomException: std::exception {

	public:
		const char* what() const throw() {
			return "Custom exception thrown.";	
		}
};

#endif
