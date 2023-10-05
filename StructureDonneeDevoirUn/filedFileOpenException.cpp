#include "failedFileOpenException.h"


failedFileOpenException::failedFileOpenException(string file) {
	_file = file;
}

string failedFileOpenException::what() {
	return "Failed to open file";
}