#pragma once


class Segment
{
private:

	Point3D A;
	Point3D B;

public:
	Segment();
	Segment(Point3D a , Point3D b);
	Segment(const Segment &S);
	
	double longueur()const;
	bool difference(const Segment& S)const;

	bool existance(const Point3D& p)const;

};