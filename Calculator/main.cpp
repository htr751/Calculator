#include <iostream>

#include "Calculator.h"

using std::cout;

int main() {
	Calculator c;
	std::cout << c.calculate(4, '+', 6) << "\r\n";
	std::cout << c.calculate(4, '-', 6) << "\r\n";
	std::cout << c.calculate(4, '*', 6) << "\r\n";
	std::cout << c.calculate(4, '/', 6) << "\r\n";

	try {
		std::cout << c.calculate(4, '/', 0) << "\r\n";
	}
	catch (const ZeroDivisionException& exc) {
		std::cout << exc.what() << "\r\n";
	}

	try {
		std::cout << c.calculate(4, '&', 6) << "\r\n";
	}
	catch (const UnknownOperationException& exc) {
		std::cout << exc.what() << "\r\n";
	}
	return 0;
}