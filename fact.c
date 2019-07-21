#include<stdio.h>

unsigned long int factorial(int n)
{
	if(n<=0 || n==1)
		return 1;
	return factorial(n-1)*n;
}

int main(void)
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%lu\n",factorial(n));
	}
}