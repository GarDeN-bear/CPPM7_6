#include "CPPM7_6_1.h"

void CPPM7_6_1() {
	int num1, num2, operation;
	double result;
	std::cout << "¬ведите первое число: ";
	std::cin >> num1;
	std::cout << "¬ведите второе число: ";
	std::cin >> num2;
	std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> operation;
	if (operation == 1) {
		std::cout << num1 << " плюс " << num2 << " = " << sum(num1, num2) << "\n";
	}
	else if (operation == 2) {
		std::cout << num1 << " вычесть " << num2 << " = " << diff(num1, num2) << "\n";
	}
	else if (operation == 3) {
		std::cout << num1 << " умножить на " << num2 << " = " << multiplication(num1, num2) << "\n";
	}
	else if (operation == 4) {
		std::cout << num1 << " делить на " << num2 << " = " << division(num1, num2) << "\n";
	}
	else if (operation == 5) {
		std::cout << num1 << " в степени " << num2 << " = " << exponentiation(num1, num2) << "\n";
	}
	else {
		std::cout << "¬ведите номер из списка!\n";
	}
}