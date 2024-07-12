#include "gcd.h"
#include <exception>

int gcd(int m, int n)
{
  if (m < 0) return gcd(-m,n);
  else if (n < 0) return gcd(m,-n);
  else if (m == 0 and n == 0)
    throw std::exception();
  else if (m == 0) return n;
  else if (n == 0) return m;
  else if (m < n) return gcd(n,m);
  else if (m % n == 0) return n;
  else return gcd(n, m%n);
}
