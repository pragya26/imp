#include <iostream>
using namespace std;

int square (int x)
{
  return x * x;
};

float square (float x)
{
  return x * x;
};

double square (double x)
{
  return x * x;
};

main()
{
   int    i, ii;
   float  x, xx;
   double y, yy;

   i = 2;
   x = 2.2;
   y = 2.2;

   ii = square(i);
   cout << i << ": " << ii << endl;

   xx = square(x);
   cout << x << ": " << xx << endl;

   yy = square(y);
   cout << y << ": " << yy << endl;
}
    
