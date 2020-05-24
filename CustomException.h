#ifndef CUSTOM_EXCEPTION_H_
#define CUSTOM_EXCEPTION_H_

class CustomException: std::exception {

	public:
		virtual const char * what() const throw() {
			throw "Custom exception thrown.";	
		}
};

#endif
