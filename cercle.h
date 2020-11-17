#pragma once
#include"Point.h"
#include<cmath>
const double PI = 3.141592653589793238463;
using namespace std;
class cercle
{
private:
	double rayon;
	Point p;
public:
	cercle();
	cercle(double,double,double);
	cercle(const cercle & c);
	void m_aficher();
	void chang_redus(double);
	void translat_cercle(double, double);
	double m_surface();
	double m_perimetre();
	double get_x();
	double get_y();
	bool operator=(const cercle& C);
	bool point_inclu(const cercle& C);

};

