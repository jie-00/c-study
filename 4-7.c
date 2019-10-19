#include <stdio.h>
int main(void)
{
	int a,i;
	printf("请输入一个整数：");
	scanf("%d",&a);
	i=1;
	do{
		printf("%d ",i*i);
		i=i+1;
	}while(i*i<=a);
	printf("\n");
	return 0;
}
