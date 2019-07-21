#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  
  int t;
  scanf("%d",&t);
  while(t--)
  {
    unsigned long long int n,z=1,*p,j,i,sum=0;
    scanf("%llu",&n);
    p=(unsigned long long int *)malloc(sizeof(unsigned long long int)*n);

    for( i=2;i<=n;i++)
    {
      p[i]=1;
    }

    for(i=2;i<=n;i++)
    {
      if(p[i])
      {
        for(j=i;i*j<=n;j++)
        {
          p[j*i]=0;
        }
      }
    }
    for(i=2;i<=n;i++)
    {
      if(p[i])
        sum+=i;
    }
    printf("%llu\n",sum);
  }
}