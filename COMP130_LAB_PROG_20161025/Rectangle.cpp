// include the header file
#include "Rectangle.h"

Rectangle::Rectangle() {
	length = 4;
	width = 2;
}

Rectangle::Rectangle(double l, double w) {
	length = l;
	width = w;
}

double get_perimeter() {
	return length * 2 + width * 2;
}