#pragma once

#include <exception>
#include <string>

using std::exception;
using std::string;

class CalculatorException : public exception {
public:
    CalculatorException(const char* message) : m_msg(message) {}

    virtual const char* what() const {
        return m_msg.c_str();
    }

    virtual ~CalculatorException() {}

protected:
    string m_msg;
};

class ZeroDivisionException : public CalculatorException {
public:
    ZeroDivisionException(const char* message) : CalculatorException(message) {}
    virtual ~ZeroDivisionException() noexcept {}
};

class UnknownOperationException : public CalculatorException {
public:
    UnknownOperationException(const char* message) : CalculatorException(message) {}
    virtual ~UnknownOperationException() noexcept {}
};

class Calculator {
public:
	double add(double x, double y) const;
	double substract(double x, double y) const;
	double multiply(double x, double y) const;
	double divide(double x, double y) const;
	double calculate(double x, char op, double y) const;
};