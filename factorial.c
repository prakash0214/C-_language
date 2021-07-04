# w a p to factorial of a number?

#include<stdio.h>
int main()
{
  int num=5,fact=1;
  
  for(int i=1;i<=5;i++)
  {
    fact=fact*i;
  }
  printf("%d is %d",num,fact);
}
