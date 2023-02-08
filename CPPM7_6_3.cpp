#include "CPPM7_6_3.h"

void print_info(Figure* figure) {
	figure->get_info();
}

void CPPM7_6_3() {
	Triangle triangle(10, 20, 30, 50, 60, 70);
	Figure* ptr_triangle = &triangle;
	print_info(ptr_triangle);
	RightTriangle rightTriangle(10, 20, 30, 50, 60);
	Figure* ptr_rightTriangle = &rightTriangle;
	print_info(ptr_rightTriangle);
	IsoscelesTriangle isoscelesTriangle(10, 20, 50, 60);
	Figure* ptr_isoscelesTriangle = &isoscelesTriangle;
	print_info(ptr_isoscelesTriangle);
	EquilateralTriangle equilateralTriangle(30, 60);
	Figure* ptr_equilateralTriangle = &equilateralTriangle;
	print_info(ptr_equilateralTriangle);
	Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	Figure* ptr_quadrilateral = &quadrilateral;
	print_info(ptr_quadrilateral);
	Rectangle rectangle(10, 20);
	Figure* ptr_rectangle = &rectangle;
	print_info(ptr_rectangle);
	Square square(20);
	Figure* ptr_square = &square;
	print_info(ptr_square);
	Parallelogram parallelogram(20, 30, 30, 40);
	Figure* ptr_parallelogram = &parallelogram;
	print_info(ptr_parallelogram);
	Rhombus rhombus(30, 30, 40);
	Figure* ptr_rhombus = &rhombus;
	print_info(ptr_rhombus);
}