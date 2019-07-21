#include<stdio.h>
int main(void)
{
  int t=0;
  scanf("%d",&t);
  while(t--)
  {
    unsigned long long int  n=0,num=0,reverse=0,rem=0;
    scanf("%llu",&num);
    n=num;
    while(n)
    {
      rem = n % 10;
			reverse = reverse * 10 + rem;
			n /= 10;
    }
    printf("%llu\n",reverse);
  }
}