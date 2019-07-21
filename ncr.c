#include<stdio.h>

unsigned long long int NCR(unsigned long  n,unsigned long r)
{
	if(n==r||r==0)
	{
		return 1;
	}
	return NCR(n-1,r-1)+NCR(n-1,r);
}

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long n,r;
		scanf("%lu %lu",&n,&r);
		printf("%lu",NCR(n,r)%1000000000+7);
	}
}