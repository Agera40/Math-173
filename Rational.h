#pragma once
#include "gcd.h"
#include <ostream>

class Rational {
public:
  Rational(int=0, int=1);
  Rational& operator+=(const Rational&);
  Rational& operator-=(const Rational&);
  Rational& operator*=(const Rational&);
  Rational& operator/=(const Rational&);

  friend std::ostream& operator<<(std::ostream&, const Rational&);

private:
  void reduce();
  int num, den;
};

Rational operator+(const Rational&, const Rational&);
Rational operator-(const Rational&, const Rational&);
Rational operator*(const Rational&, const Rational&);
Rational operator/(const Rational&, const Rational&);