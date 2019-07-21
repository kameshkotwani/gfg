#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  scanf("%d", &n);

  int *a = (int *)malloc(sizeof(int) * n);
  if(a==NULL)
  {
    return -1;
  }
  int m;
  scanf("%d",&m);
  int *b = (int *)malloc(sizeof(int) * m);
  if(b==NULL)
  {
    return -1;
  }
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  int *c=(int *)malloc(sizeof(int)*(m+n));
  int i=0,j=0,k=0;
  while(i<n && j<m)
  {
    if(a[i]<b[j])
    {
      c[k++]=a[i++];
    }
    else
    {
      c[k++]=b[j++];
    }    
  }
  while(i<n)
  {
    c[k++]=a[i++];
  }
  while(j<m)
  {
    c[k++]=b[j++];
  }
  for(int i=0;i<k;i++)
  {
    printf("%d ",c[i]);
  }
  free(a);
  free(b);
  free(c);
}