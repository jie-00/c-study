#include <stdio.h>
int main(void)
{   int a,b;
	do{
	printf("请输入：");
	scanf("%d",&a);
		if(a>0)
			puts("该整数为正数");

	        else if(a==0)
		   	puts("该整数为零");
		else
			puts("该整数为负数");
		printf("是否继续？<Yes…1/NO…0>");
		scanf("%d",&b);
	}while(b==1);
	return 0;
}
