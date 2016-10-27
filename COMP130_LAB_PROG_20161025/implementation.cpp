// Implementation File

// include the header file
#include "geometricShapesH.h"

// circle
Circle::Circle() {
	m_radius = 1;
}

Circle::Circle(double p_radius) {
	m_radius = p_radius;
}

double Circle::getArea() {
	return m_radius * m_radius * 3.14159;
}

double Circle::getRadius() {
	return m_radius;
}

void Circle::setRadius(double p_radius) {
	m_radius = p_radius;
}

// rectangle
Rectangle::Rectangle() {
	double width = 1.0;
	double length = 1.0;
}

Rectangle::Rectangle(double p_width, double p_length) {
	width = p_width;
	length = p_length;
}

double get_area(double p_width, double p_length) {
	return p_width * p_length;
}

double get_perimeter(double p_width, double p_length) {
	return p_width * 2 + p_length * 2;
}