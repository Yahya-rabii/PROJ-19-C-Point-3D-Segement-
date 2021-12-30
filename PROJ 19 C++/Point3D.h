#pragma once

class Point3D
{

private:

	double X;
	double Y;
	double Z;

public:
	Point3D();
	Point3D(double x ,double y ,double z);
	Point3D(const Point3D &p);
	double distance_p(const Point3D& p)const;
	bool cmp_po(const Point3D& p)const;

	double min_absX(const Point3D& p)const;
	double max_absX(const Point3D& p)const;
	double min_ordY(const Point3D& p)const;
	double max_ordY(const Point3D& p)const;

	bool comparer(double min_x, double max_x, double min_y, double max_y) const;

};