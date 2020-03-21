#include "point.hpp"
#include <ostream>



Point_d::Point_d(double a, double b)
  : x(a),
    y(b)
{}


void Point_d::print(std::ostream& os) const
{
  os << "Point: " << (double)x << ',' << (double)y ;
}

std::ostream& operator<<(std::ostream& os, const Point_d& a)
{
  std::ostream::sentry cerberus (os);
  if (cerberus)
    a.print(os);
  return os;
}
