#include <iostream>
using namespace std;



// ax + by = gcd(a,b)

int extended_euclid(int a, int b, int &x, int &y)
{
  if(b==0)
  {
    x = 1;
    y = 0;
    return a;
  }
  int gcd = extended_euclid(b, a%b, y, x);
  y -=(a/b)*x;
  return g;
}
