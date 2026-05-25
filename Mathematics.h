#pragma once
#ifndef MATHEMATICS_H
#define MATHEMATICS_H

#include <cmath>

class Mathematics
{

public :
	Mathematics();
	double calculateTangent(double degree) const;
	double calculateCartesianDistance(double x1, double y1, double x2, double y2) const;
	double calculateHarvesineDistance(double lat1, double lon1, double lat2, double lon2) const;
	double calculateSine(double degree) const;
	double calculateCosine(double angle) const;
	double calcualteParabola(double a, double b, double c, double x) const;
	bool isPointOnHyperbola(double x, double y, double h, double k, double a, double b) const;

private:
	double calculateDegreeInRadians(double degree) const;
};

#endif // !MATHEMATICS_H
