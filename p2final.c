#include <stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction fraction;
fraction input_fraction()
{
  fraction f;
  printf("enter the value of fraction:");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
fraction Largest_fraction(fraction f1, fraction f2, fraction f3)
{
  int sden=f1.den*f2.den*f3.den;
}
void output(fraction f1, fraction f2, fraction f3, fraction largest)
  {
    
  }


