#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int *p=(int *)malloc(sizeof(int)*n+1);
	if(p==NULL)
	{
		return;
	}
	for(int i=2;i<=n;i++)
	{
		p[i]=i;
	}
	for(int i=2;i<=n;i*2)
	{
		if(p[i]%2==0)
		{
			p[i]=-1;
		}
	}
	for(int i=2;i<=n;i++)
	{
		printf("%d ",p[i]);
	}
}

