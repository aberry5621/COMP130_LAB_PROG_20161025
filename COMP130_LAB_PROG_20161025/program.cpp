// program.cpp
// main program file
// programmer: alex
// date: octo 25 2016
// purpose: placeholder for lab ex

#include <iostream>
#include "geometricShapesH.h"
using namespace std;

int main() {

	cout << "Get rect length: ";

	Rectangle rectangle(2, 4);

	cout << rectangle.length;

	// build object 1

	Rectangle rect_d;

	cout << "rect_d properties" << endl;
	cout << "=================" << endl;
	cout << "rect_d width: " << rect_d.width << endl;
	cout << "rect_d length: " << rect_d.length << endl;
	cout << "rect_d area: " << rect_d.get_area() << endl;
	cout << "rect_d perimeter: " << rect_d.get_perimeter() << endl;

	Rectangle rect_a(4, 40);

	cout << "rect_a properties" << endl;
	cout << "=================" << endl;
	cout << "rect_a width: " << rect_a.width << endl;
	cout << "rect_a length: " << rect_a.length << endl;
	cout << "rect_a area: " << rect_a.get_area() << endl;
	cout << "rect_a perimeter: " << rect_a.get_perimeter() << endl;

	// build object 2

	Rectangle reckity_rect(3.5, 35.9);

	cout << "reckity_rect properties" << endl;
	cout << "=======================" << endl;
	cout << "reckity_rect width: " << reckity_rect.width << endl;
	cout << "reckity_rect length: " << reckity_rect.length << endl;
	cout << "reckity_rect area: " << reckity_rect.get_area() << endl;
	cout << "reckity_rect perimeter: " << reckity_rect.get_perimeter() << endl;

	return 0;
}