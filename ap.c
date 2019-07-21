#include<stdio.h>
int main(void)

{
  int t=0,ft=0,st=0,nt=0,term=0,d=0;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d%d",&ft,&st);
    scanf("%d",&nt);
    d=st-ft;
    term= ft+(nt-1)*d;
    printf("%d\n",term);
  }
 
}