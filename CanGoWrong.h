#ifndef CAN_GO_WRONG_H_
#define CAN_GO_WRONG_H_

class CanGoWrong {

	public:
		CanGoWrong() {
			char *error_test_ = new char[9999999999999999];	
			delete [] error_test_;
		}
};

#endif
