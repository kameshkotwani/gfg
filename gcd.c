#include <stdio.h>
int main(void)
{
  int t = 0, n1, n2, i, max;
  scanf("%d", &t);
  n1 = n2 = i = 0, max;
  while (t--)
  {
    scanf("%d %d", &n1, &n2);
    if (n1 >= n2)
    {
      for (i = 1; i <= n1; i++)
      {
        if (n1 % i == 0 && n2 % i == 0)
        {
          max = i;
          if (i > max)
          {
            max = i;
          }
        }
      }
      printf("%d\n", max);
    }
    else
    {
      for (i = 1; i <= n2; i++)
      {

        if (n1 % i == 0 && n2 % i == 0)
        {
          max = i;
          if (i > max)
          {
            max = i;
          }
        }
      }
      printf("%d\n", max);
    }
  }
}