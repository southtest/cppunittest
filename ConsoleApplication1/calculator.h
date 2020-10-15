#pragma once
#ifndef CALCULATOR_H_
#define CALCULATOR_H_

class Calculator {
public:
	Calculator();
	void add(double x);
	void substract(double x);
	void multiply(double x);
	void divide(double x);
	void square(double x);
	void suqareRoot(double x);
	void clear();
	double get_result();
private:
	double result;
};

#endif // CALCULATOR_H_