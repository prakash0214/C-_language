#include<stdio.h>
int main()
{
  int num=5;
  for(int i=1; i<=num;i++)
  {
    if(num%i==0)
    {
      cnt++;
    }
  }
  if(cnt==2)
  {
    printf("%d is prime num\n",num);
  }
  else
  {
    printf("%d is not prime num\n",num);
  }
}
