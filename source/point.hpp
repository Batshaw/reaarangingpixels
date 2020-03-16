#ifndef POINT_HPP
#define POINT_HPP

#include <iosfwd>
#include <opencv2/opencv.hpp>
using namespace cv;


class Point_d
{
public :

  Point_d (double = 0, double = 0);
  void print(std::ostream&) const;

  double x;
  double y;
};

std::ostream& operator<<(std::ostream&, const Point_d&);

#endif