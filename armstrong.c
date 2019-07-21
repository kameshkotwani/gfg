#include<stdio.h>
#include<math.h>
int main(void)
{
  int t = 0, num = 0,n_num=0,n=0,sum=0,temp;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &num);
    n=num;
    while(n)
    {
      temp=n%10;
      sum+=pow(temp,3);
      n/=10;
    }
    if(num==sum)
      printf("YES\n");
    else
      printf("NO\n");
  }
  
}