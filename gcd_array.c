#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int t;
	// unsigned long int a[1000000]={0};
	unsigned long *p=NULL;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long n,i,j,gcd;
		p=(unsigned long*)malloc(sizeof(unsigned long)*n);
		if(p==NULL)
			return 0;
		scanf("%lu",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lu\b",&p[i]);
		}
		gcd=p[0],j=1;
		while(j<n)
		{
			if(p[j]%gcd==0)
			{
				j++;
			}
			else
			{
				gcd=p[j]%gcd;	
			}
			
		}

		
		printf("%lu",gcd);
	}
}