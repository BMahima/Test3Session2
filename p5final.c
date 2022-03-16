#include <stdio.h>
int input_size()
{
  int n;
  printf("enter the size of an array: ");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  printf("enter the elements of the array:");
  for(int i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }  
}
int find_largest(int n, int a[n])
{
  int temp1=0, temp2=0;
  for(int i=0;i<n;i++)
    {
      if (a[i] > temp1)
      {  temp1 = a[i];
      temp2 =i;
      }  
    }  
  return temp2; 
}
void out_put(int n, int a[n], int largest)
{
  printf("the index is %d",largest);
}
int main()
{
  int n;
  n=input_size();
  int a[n],temp1,largest;
  input_array(n,a);
  largest=find_largest(n,a);
  out_put(n,a,largest);
  return 0;
}
