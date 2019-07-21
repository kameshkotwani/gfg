#include<stdio.h>
#include<math.h>
int main(void)
{
  int t,d;
  scanf("%d",&t);
  while(t--)
  {
    int a,b,k;
    scanf("%d %d %d",&a,&b,&k);
    unsigned long long int z=pow(a,b);
    while(k--)
    {
      d=z%10;
      z/=10;
    }
    printf("%llu\n",d);
  }
}