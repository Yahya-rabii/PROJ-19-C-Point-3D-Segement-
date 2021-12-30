#include "Point3D.h"
#include"Segment.h"
#include <iostream>
#include <cmath>
using namespace std;

Point3D::Point3D()
{
	this->X = 0;
	this->Y = 0;
	this->Z = 0;

}

Point3D::Point3D(double x, double y, double z)
{
	this->X = x;
	this->Y = y;
	this->Z = z;


}

Point3D::Point3D(const Point3D& p)
{

	this->X = p.X;
	this->Y = p.Y;
	this->Z = p.Z;


}

double Point3D::distance_p(const Point3D& p) const
{
	double dis = 0;

	dis = sqrt(pow(p.X - this->X, 2) + pow(p.Y - this->Y, 2) + pow(p.Z - this->Z, 2));

	return dis;
}

bool Point3D::cmp_po(const Point3D& p) const
{
	
	if (this->X == p.X )
	{
		if (this->Y == p.Y)
		{
			if (this->Z == p.Z)
		
			{

				return false;

			}

			else return true;
		}
		else return true;
	}
	else return true;


}

double Point3D::min_absX(const Point3D& p) const
{
	double minabs=0;

	if (this->X < p.X) {

		minabs = this->X;

	}

	else if(p.X < this->X)
	{
		
		minabs = p.X;

	}

	return minabs;

}

double Point3D::max_absX(const Point3D& p) const
{
	double maxabs = 0;

	if (this->X > p.X) {

		maxabs = this->X;

	}

	else if (p.X > this->X)
	{

		maxabs = p.X;

	}

	return maxabs;
}

double Point3D::min_ordY(const Point3D& p) const
{
	double minord = 0;

	if (this->Y < p.Y) {

		minord = this->Y;

	}

	else if (p.Y < this->Y)
	{

		minord = p.Y;

	}

	return minord;
}

double Point3D::max_ordY(const Point3D& p) const
{
	double maxord = 0;

	if (this->Y > p.Y) {

		maxord = this->Y;

	}

	else if (p.Y > this->Y)
	{

		maxord = p.Y;

	}

	return maxord;
}

bool Point3D::comparer(double min_x, double max_x, double min_y, double max_y)const
{

	if (this->X > min_x && this->X < max_x)
	{

		if (this->Y > min_y && this->Y < max_y)
		{

			return true;

		}

		else return false;

	}
	else return false;

}

