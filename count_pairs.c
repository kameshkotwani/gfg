#include <stdio.h>
#include<math.h>
int countPairs(int N)
{
	int count = 0;

	// Check for each number 1 to cbrt(N)
	for (int i = 1; i <= cbrt(N); i++)
	{
		// Store cube of a number
		int cb = i * i * i;

		// Subtract the cube from given N
		int diff = N - cb;

		// Check if the difference is also
		// a perfect cube
		int cbrtDiff = cbrt(diff);

		// If yes, then increment count
		if (cbrtDiff * cbrtDiff * cbrtDiff == diff)
			count++;
	}

	// Return count
	return count;
}
int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		unsigned long long int n, i, a, b;
		scanf("%llu", &n);
		printf("%d\n",countPairs(n));
	}
}