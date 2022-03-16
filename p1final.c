#include <stdio.h> 
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the value of num1: ");
  scanf("%d",num1);
  printf("enter the value of den1: ");
  scanf("%d",den1);
  printf("enter the value of num2: ");
  scanf("%d",num2);
  printf("enter the value of den2: ");
  scanf("%d",den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *num3=num1*den2+num2*den1;
  *den3=den1*den2;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("%d/%d + %d/%d = %d/%d \n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int a,b,c,d,e,f;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&e,&f);
  output(a,b,c,d,e,f);
  return 0;
}