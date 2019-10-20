#include <stdio.h>
int main(void)
{
	int l,i,j;
	printf("让我们来画一个金字塔。\n金字塔有几层:");
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		for(j=l-i;j>=0;j--)
			printf(" ");
		for(j=1;j<=(i-1)*2+1;j++)
			printf("*");
		for(j=l-i;j>=0;j--)
			printf(" ");
		putchar('\n');
              }
    return 0;
}    
