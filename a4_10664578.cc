#include <iostream>
using namespace std;
int gcd(int a1, int b2);
int main()
{
 int a,b;
 cout<<"Enter the first number";
 cin>> a1 >> b2;
 cout<< "G.C.D of" << a1<< b2;
 return 0;
}
 int gcd(int a1, int b2)
{
 if ( b2 !=0)
   return gcd(a1, a1%b2);
 else
  return a1;
}


