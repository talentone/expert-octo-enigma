#include "Mathematics.h"

Mathematics::Mathematics()
{}

double Mathematics::calculateDegreeInRadians(double degree) const
{
	double pi = 3.14;
	double radian = 0.0;

	// Formulae : degree * (pi / 180)
	return radian = degree * (pi / 180.0);
}

double Mathematics::calculateCartesianDistance(double x1, double y1, double x2, double y2) const
{
    double result = 0.0;

    //Formulae : sqrt( (x2-x1)^2 + (y2-y1)^2 )
    return result = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

double Mathematics::calculateHarvesineDistance(double lat1, double lon1, double lat2, double lon2) const
{
    const double EARTH_RADIUS_KM = 6378;

    double latitude = calculateDegreeInRadians(lat2 - lat1);
    double longitude = calculateDegreeInRadians(lon2 - lon1);

    lat1 = calculateDegreeInRadians(lat1);
    lat2 = calculateDegreeInRadians(lat2);

    double a = std::pow(std::sin(latitude / 2), 2); // (sin(latitude/2))^2
    double b = std::pow(std::sin(longitude / 2), 2); // (sin(longitude/2))^2
    double c = a + b * std::cos(lat1) * std::cos(lat2); // (sin(latitude/2))^2 + (sin(longitude/2))^2 * cos(lat1) * cos(lat2)
    double d = 2 * std::asin(std::sqrt(c)); // 2 * asin(sqrt((sin(latitude/2))^2 + (sin(longitude/2))^2 * cos(lat1) * cos(lat2)))

    return EARTH_RADIUS_KM * d;
}

double Mathematics::calculateSine(double degree) const
{
    double result = 0.0;

    return result = std::sin(calculateDegreeInRadians(degree));
}

double Mathematics::calculateCosine(double angle) const
{
    double result = 0.0;

    return result = std::cos(angle);
}

double Mathematics::calcualteParabola(double a, double b, double c, double x) const
{
    double result = 0.0;

    // Formulae : a * x^2 + bx + c
    return result = (a * std::pow(x, 2)) + (b * x) + c;
}

bool Mathematics::isPointOnHyperbola(double x, double y, double h, double k, double a, double b) const
{
    double result = 0.0;
    const double EPSILON = 1e-9;

    // Formulae : ((x-h)^2 / a^2) - ((y-k)^2 / b^2) = 1
    result = ((std::pow(x - h, 2) / std::pow(a, 2)) - (std::pow(y - k, 2) / std::pow(b, 2)));

    if (std::abs(result - 1.0) < EPSILON)
    {
        return true;
    }

    return false;
}
