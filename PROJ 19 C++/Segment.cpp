#include "Point3D.h"
#include"Segment.h"
#include <iostream>
#include <cmath>

using namespace std;

Segment::Segment()
{
	this->A;
	this->B;

}

Segment::Segment(Point3D a, Point3D b)
{
	this->A = a;
	this->B = b;

}

Segment::Segment(const Segment& S)
{
	this->A = S.A;
	this->B = S.B;

}

double Segment::longueur() const
{
	double dis = 0;
	dis =this->A.distance_p(this->B);

	return dis;
}

bool Segment::difference(const Segment& S) const
{
	
	if (this->longueur() != S.longueur() )
	{

		return true;

	}

	else
	{

		if (this->A.cmp_po(S.A) || this->B.cmp_po(S.B) )
		{

			return true;

		}

		else
		{
			return false;
		}





	}




}

bool Segment::existance(const Point3D& p) const
{


		double max_abs = 0;
		double min_abs = 0;
		double max_ord = 0;
		double min_ord = 0;

		max_abs = this->A.max_absX(this->B);
		min_abs = this->A.min_absX(this->B);
		max_ord = this->A.max_ordY(this->B);
		min_ord = this->A.min_ordY(this->B);

		if ( p.comparer(min_abs , max_abs , min_ord , max_ord) )
		{

			return true;

		}
	
		else
		{
			return false;
		}



}