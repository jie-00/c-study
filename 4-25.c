#include <stdio.h>
int main(void)
{
	int l,i,j;
	printf("让我们来画一个向下的金字塔。\n金字塔有几层:");
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		for(j=0;j<=i-1;j++)
		printf(" ");
		for(j=(l-i)*2+1;j>=1;j--)
	        printf("%d",i%10);
	        for(j=0;j<=i-1;j++)
                printf(" ");
                printf("\n");        
	}
	return 0;
}

