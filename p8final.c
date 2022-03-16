#include <stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
int find_gcd(int a, int b)
{
  int i,small,gcd;
  if ( a > b)
  {
    small = a;
    a=b;
    b=small;
  }
  if( b%a==0)
    return a;

  for(i=0;i<=a/2;i++)
  {
    if ( a%i == 0 && b%i == 0)
      gcd = i;
  }
  return gcd;
}
Fraction input_fraction()
{
  
}
