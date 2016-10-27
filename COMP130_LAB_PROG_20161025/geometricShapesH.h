// Header File

#ifndef geometricShapesH_h
#define geometricShapesH_h

class Circle {

public:
	
	Circle();
	
	Circle(double p_radius);
	
	double getArea();
	
	double getRadius();
	
	void setRadius(double p_radius);

private:

	double m_radius;
};

class Rectangle {

public: 

	Rectangle();

	Rectangle(double p_length, double p_width);

	double get_area();

	double get_perimeter();

};

#endif