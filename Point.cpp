#include "Point.h"

Point::Point()
{
	this->m_x = 0.0;
	this->m_y = 0.0;
}

Point::Point(double a, double b)
{
	this->m_x = a;
	this->m_y = b;

}

Point::Point(const Point& O)
{
	this->m_x = O.m_x;
	this->m_y = O.m_y;
}

void Point::m_afficher()
{
	cout << "Point(" << this->m_x << "," << this->m_y << ")";
	


}

void Point::m_afficher_cercle()
{
	cout << this->m_x << "," << this->m_y;
}

void Point::set_point(double a, double b)
{
	this->m_x = a;
	this->m_y = b;
}

Point Point::get_point()
{
	Point P;
	P.m_x = this->m_x;
	P.m_y = this->m_y;

	return P;
}

double Point::get_X()
{

	return this->m_x;
}

double Point::get_Y()
{
	return this->m_y;
}
