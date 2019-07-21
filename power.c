#include<stdio.h>

int power(int m,int n)
{
  if(n==0)
  {
    return 1;
  }
  return power(m,n-1)*m;
}

int power1(int m,int n)
{
  if(n==0)
    return 1;
  if(n%2==0)
    return power1(m*m,n/2);
  return power1(m*m,(n-1)/2)*m;
}


int main(void)
{
  printf("%d",power1(9,3)); 
}