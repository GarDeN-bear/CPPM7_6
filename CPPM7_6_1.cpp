#include "CPPM7_6_1.h"

void CPPM7_6_1() {
	int num1, num2, operation;
	double result;
	std::cout << "������� ������ �����: ";
	std::cin >> num1;
	std::cout << "������� ������ �����: ";
	std::cin >> num2;
	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	std::cin >> operation;
	if (operation == 1) {
		std::cout << num1 << " ���� " << num2 << " = " << sum(num1, num2) << "\n";
	}
	else if (operation == 2) {
		std::cout << num1 << " ������� " << num2 << " = " << diff(num1, num2) << "\n";
	}
	else if (operation == 3) {
		std::cout << num1 << " �������� �� " << num2 << " = " << multiplication(num1, num2) << "\n";
	}
	else if (operation == 4) {
		std::cout << num1 << " ������ �� " << num2 << " = " << division(num1, num2) << "\n";
	}
	else if (operation == 5) {
		std::cout << num1 << " � ������� " << num2 << " = " << exponentiation(num1, num2) << "\n";
	}
	else {
		std::cout << "������� ����� �� ������!\n";
	}
}