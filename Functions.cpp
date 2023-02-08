#include "Functions.h"

int sum(int a, int b) { return a + b; }

int diff(int a, int b) { return a - b; }

int multiplication(int a, int b) { return a * b; }

double division(int a, int b) { return static_cast<double>(a) / b; }

int exponentiation(int a, int b) {
	int result = 1;
	for (int i = 0; i < b; i++) {
		result *= a;
	}
	return result;
}