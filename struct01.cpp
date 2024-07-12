#include <cmath>
#include <iostream>
/*
struct point {
  double x,y;
};

double distance(const point& P, const point& Q)
{
  double xdiff = P.x - Q.x;
  double ydiff = P.y - Q.y;
  return sqrt(pow(xdiff,2.0) + pow(ydiff,2.0));
}

struct triangle {
  point A, B, C;
};

// Heron's formula for area
double area(const triangle& T)
{
  double a = distance(T.B, T.C);
  double b = distance(T.A, T.C);
  double c = distance(T.A, T.B);

  // semiperimeter
  double s = 0.5 * (a+b+c);

  return sqrt(s*(s-a)*(s-b)*(s-c));
}

// The perimeter of a triangle
double perimeter(const triangle& T){
  double a = distance(T.B, T.C);
  double b = distance(T.A, T.C);
  double c = distance(T.A, T.B);

  return a + b + c;
}

int main()
{
  point A = {1,1}, B = {5,3}, C = {2,5};
  triangle T = {A,B,C};
  std::cout << "The area of my triangle is approximately "
	    << area(T) << ".\n";
  std::cout << "Perimeter of my triangle is " << perimeter(T) << ".\n";
}

*/