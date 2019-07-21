#include<stdio.h>
int main(void)
{
  int t;
  unsigned long long int n,i,sum;
  scanf("%d",&t);
  while(t--)
  {
    n=0,sum=1;
    scanf("%llu",&n);
    for(i=2;i*i<=n;i++)
    {
      if(n%i==0)
        if(i*i!=n)
        {
          sum=sum+i+(n/i);
        }
        else
        {
          sum=sum+i;
        }
    }
    if(sum==n)
    {
    printf("%llu\n",sum);
      printf("1\n");

    }
    else
    printf("%llu\n",sum);
      printf("0\n");
  }
}