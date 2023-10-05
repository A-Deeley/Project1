#pragma once
#include <string>
#include <exception>
using namespace std;

class failedFileOpenException : public exception {
private:
	string _file;

public:

	failedFileOpenException(string file);
	string what();
};