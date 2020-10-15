// calculator.cpp
#include "stdafx.h"
#include "calculator.h"
#include <iostream>
#include <cmath>
using namespace std;
Calculator::Calculator() : result(0.0) {}
void Calculator::add(double x) {
	result += x;
}
void Calculator::substract(double x) {
	result -= x;
}
void Calculator::multiply(double x) {
	result *= x;
}
void Calculator::divide(double x) {
	result /= x;
}
void Calculator::square(double x) {
	result = x * x;
}
void Calculator::suqareRoot(double x) {
	result = pow(result, x);
}
void Calculator::clear() {
	result = 0;
}
double Calculator::get_result() {
	return result;
}