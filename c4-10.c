#include <stdio.h>
int main(void)
{
	int a,i;
	printf("正整数：");
	scanf("%d",&a);
	i=a;
	if(i>0)
	do{
		printf("*\n");
		--i;
	}while(i>=0);
	else
	return 0;
}
