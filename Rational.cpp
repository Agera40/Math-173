#include "Rational.h"
#include <ostream>
#include "gcd.h"

void Rational::reduce()
{
	int g = gcd(num, den);
	num /= g;
	den /= g;
	//Negatives in the denominator
	if (den < 0) {
		num *= -1;
		den *= -1;
	}
}

Rational::Rational(int n, int d)
{
	num = n, den = d;
}


Rational& Rational::operator+=(const Rational& a)
{
	int x = num, y = den, w = a.num, z = a.den;
	num = x * z + y * w;
	den = y * z;

	reduce();
	return *this;
}

Rational operator+(const Rational& r, const Rational& s)
{
	Rational result = r;
	result += s;
	return result;
}

Rational& Rational::operator-=(const Rational& a)
{
	int x = num, y = den, w = a.num, z = a.den;
	num = x * z - y * w;
	den = y * z;

	reduce();
	return *this;
}

Rational operator-(const Rational& r, const Rational& s)
{
	Rational result = r;
	result -= s;
	return result;
}

Rational& Rational::operator*=(const Rational& a)
{
	num *= a.num;
	den *= a.den;

	reduce();
	return *this;
}

Rational operator*(const Rational& r, const Rational& s)
{
	Rational result = r;
	result *= s;
	return result;
}

Rational& Rational::operator/=(const Rational& a)
{
	num *= a.den;
	den *= a.num;

	reduce();
	return *this;
}

Rational operator/(const Rational& r, const Rational& s)
{
	Rational result = r;
	result /= s;
	return result;
}

std::ostream& operator<<(std::ostream& out, const Rational& a) {
	out << a.num << "/" << a.den;
	return out;
}
