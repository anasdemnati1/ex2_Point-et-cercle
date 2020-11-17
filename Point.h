#pragma once
#include <iostream>
using namespace std;
class Point
{
private:
	double m_x;
	double m_y;
public:
	Point();
	Point(double, double);
	
	Point(const Point & O);
	void m_afficher();
	void m_afficher_cercle();
	void set_point(double, double);
	Point get_point();
	double get_X();
	double get_Y();







};

