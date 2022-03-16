#include <stdio.h>
#include <string.h>
void input_string(char *a)
{
  printf("enter the string: ");
  scanf("%s",a);
}
int count_words(char *string)
{
  char s[100];
  int count=0;
  for(int i=0;s[i] != 0;i++)
    {
      if(s[i]== ' ' && s[i+1] != ' ' )
      {
        count++;
      }
    }
  return count;
}
void output(char *string, int no_words)
{
  printf("the no of words is %d",no_words);
}