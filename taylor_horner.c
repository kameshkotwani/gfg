#include<stdio.h>
double e(int x,int n)
{
    static double s;
    if(n==0)
        return s;
    s=1+x*s/n;
    return e(x,n-1);
}

int main(void)
{
    int x=1;
    int n=10;
    float s=1;
    for(;n>0;n--)
    {
        s = 1+x*s/n;
    }
    printf("%lf\n",e(1,10));
    printf("%f\n",s);
}