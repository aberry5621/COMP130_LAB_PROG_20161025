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

		double length, width;

		Rectangle();

		Rectangle(double, double);

		double get_area();

		double get_perimeter();

};

#endif