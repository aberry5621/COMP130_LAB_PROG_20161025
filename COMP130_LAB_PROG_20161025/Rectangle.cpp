// Implementation File

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

double get_perimeter(double p_length, double p_width) {
	return p_length * 2 + p_width * 2;
}