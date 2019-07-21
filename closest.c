#include<stdio.h>
int main(void)
{
  int t=0;
  scanf("%d",&t);
  while(t--)
  {
    int n,m,r,z;
    scanf("%d %d",&n,&m);
    r=n%m;
    printf("%d\n",r);
    if(r>n)
    {
      if(r<0)
      {
        z=n-r;
      }
      else
      {
        z=n+r;
      }
      printf("%d\n",z);
    }
    else if(r<n && r<0)
    {
      z=n-r;
      printf("%d\n",z);
    }
    else if(r)
    {
      printf("%d\n",m);
    }
    else
    {
      z=n+r;
      printf("%d\n",z);
    }
    
  }
}