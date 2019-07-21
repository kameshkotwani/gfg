#include<stdio.h>
#include<math.h>
int main(void)
{
  int t;
  
  scanf("%d",&t);
  while(t--)
  {
    int a1,a2;			
    scanf("%d %d",&a1,&a2);
    int n;
    scanf("%d",&n);
    double r=((double) a2)/a1;
    int m=floor(a1*pow(r,n-1));   
    printf("%d\n",m);   
  }
}