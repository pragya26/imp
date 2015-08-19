#include <iostream>
using namespace std;

template <typename T, typename U>
void squareAndPrint(T x, U y)
{
   T result;
   U otherVar;
   cout << "X: " << x << " " <<  x * x << endl;
   cout << "Y: " << y << " " <<  y * y << endl;
};

main()
{
   int   ii = 2;
   float jj = 2.1;

   squareAndPrint<int,float>(ii, jj);
}
//similar to normal template creation
