#include <stdio.h>

int main(void)
{
	int temp = 0, t = 0, num = 0, new_num = 0, sum, palin = 0;
	scanf("%d", &t);
	while (t--)
	{
		sum=0;
		scanf("%d", &num);
		//finding sum of digits
		new_num = num;
		while (new_num)
		{
			temp = new_num % 10;
			sum += temp;
			new_num /= 10;
		}
		int temp1 = sum;
		//checking palindrome of the sum
		int r = 0, z = 0;
		while (temp1)
		{
			r = temp1 % 10;
			z = z * 10 + r;
			temp1 /= 10;
		}

		if (sum == z)
			printf("YES\n");
		else
			printf("NO\n");
	}
	printf("\n");
	return 0;
}