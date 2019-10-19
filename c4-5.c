#include <stdio.h>
int main(void)
{
	int a,i,b;
	printf("请输入一个整数：");
	scanf("%d",&a);
	i=0;
	 while(i<=a/2)
     	 printf("%d ",2*i++);
	  printf("\n");
	return 0;
}

