#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j;
	int *p;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int z=1;
		int n;
		scanf("%d",&n);
		p=(int *)malloc(sizeof(int)*n+1);
		for(i=2;i<=n;i++)
		{
			p[i]=1;
		}
		for(i=2;i<=n;i++)
		{
			if(p[i])
			{
				for(j=i;i*j<=n;j++)
				{
					p[i*j]=0;
				}
			}
		}
		for(i=2;i<=n;i++)
		{
			if(p[i])
			{
				printf("%d ",i);
			}
		}
		printf("\n");
	}
	

}