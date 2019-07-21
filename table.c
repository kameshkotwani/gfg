#include<stdio.h>

int main() {
    int t=0,n=0;
    scanf("%d",&t);
    while(t)
    {
        scanf("%d",&n);
        
        for(int i=1;i<=10;i++)
        {
            printf("%d ",i*n);
        }
        printf("\n");
        t--;
    }
	
	return 0;
}