#include <stdio.h>
#include<math.h>

int prime(int n)
{

		int n, i, flag = 0;
		scanf("%d", &n);
		i=2;
		while(i*i<=n)
		{
			if (n % i == 0)
			{
				flag = 1;
				printf("No\n");
				break;
			}
			i++;
		}
		if (n == 1)
		{
			printf("No\n");
		}
		else
		{
			if (flag == 0)
				printf("Yes\n");
				}
	



}






int main()


{
	int t;
	scanf("%d", &t);
	while (t--)
	{

		int n, i, flag = 0;
		scanf("%d", &n);
		i=2;
		while(i*i<=n)
		{
			if (n % i == 0)
			{
				flag = 1;
				printf("No\n");
				break;
			}
			i++;
		}
		if (n == 1)
		{
			printf("No\n");
		}
		else
		{
			if (flag == 0)
				printf("Yes\n");
				}
	}
	return 0;
}