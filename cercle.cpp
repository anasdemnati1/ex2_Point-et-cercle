#include "cercle.h"

cercle::cercle()
{
	this->rayon = 1.0;
	this->p.set_point(0.0, 0.0);
	
}

cercle::cercle(double a, double b, double r)
{
	this->p.set_point(a, b);
	this->rayon = r;


}

cercle::cercle(const cercle& c)
{
	this->rayon = c.rayon;
	this->p = c.p;
}

void cercle::m_aficher()
{
	cout << "le cecle" << this->p.m_afficher_cercle() <<"," << this->rayon << endl;



}

void cercle::chang_redus(double re)
{
	this->rayon = re;
}

void cercle::translat_cercle(double a, double b)
{
	this->p.set_point(a, b);
}

double cercle::m_surface()
{
	double surface;
	surface = pow(this->rayon,2) * PI;

	return surface;
}

double cercle::m_perimetre()
{
	double perimeter;
	perimeter = 2 * PI * this->rayon;
	return perimeter;
}

double cercle::get_x()
{
	return this->p.get_X();
}

double cercle::get_y()
{
	return this->p.get_Y();
}



bool cercle::operator=(const cercle& C)
{
	
	if (this->rayon == C.rayon && this->p.get_X() == C.p) {
		return true;
	}
	else
	{
		return false;
	}

	
}

bool cercle::point_inclu(const cercle& C)
{
	double res;
	res = sqrt(pow(this->p.get_X - C.p., 2) - pow(this->p.get_Y - C.p);
	if (res > this->rayon) {
		return true;
	}
	else
	{
		return false;
	}
	
}
