#include <iostream>
using namespace std;
template <class T>//template <typename T>, create a template to be used by various similar function.
inline T square(T x)// "T" represents the data type. The compiler will generate the type specific functions required.
{
   T result;
   result = x * x;
   return result;
};
main()
{
   int    i, ii;
   float  x, xx;
   double y, yy;
   i = 2;
   x = 2.2;
   y = 2.2;

   ii = square<int>(i);
   cout << i << ": " << ii << endl;

   xx = square<float>(x);
   cout << x << ": " << xx << endl;

   // Explicit use of template
   yy = square<double>(y);
   cout << y << ": " << yy << endl;

   // Implicit use of template
   yy = square(y);
   cout << y << ": " << yy << endl;
}
 //A "C" macro function could also perform this purpose: #define square(x) (x * x)
//The advantage of the template is that it performs type checking while the macro does not.   
