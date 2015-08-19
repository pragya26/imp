#include <iostream>
using namespace std;

template <typename T, int count>//value of count=3
void loopIt(T x)
{
   T val[count];//array declaration as T=val[3];

   for(int ii=0; ii<count; ii++)
   { 
       val[ii] = x++;
       cout <<  val[ii] << endl;
   }
};

main()
{
   float xx = 2.1;

   loopIt<float,3>(xx);// 3 passes to count
}

//............default template value............//

/*
#include <iostream>
using namespace std;

template <typename T=float, int count=3>
T multIt(T x)
{
   for(int ii=0; ii<count; ii++)
   {
       x = x * x;
   }
   return x;
};

main()
{
   float xx = 2.1;

   cout << xx << ": " << multIt<>(xx) << endl;;
}
*/

