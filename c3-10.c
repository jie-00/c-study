#include <stdio.h>
int main(void)
{   int a,b,c;
	printf("请输入三个整数。\n");
	printf("整数A："); scanf("%d",&a);
	printf("整数B："); scanf("%d",&b);
	printf("整数C："); scanf("%d",&c);
	if(a==b)
		if(b==c) 
			puts("三个整数相等");
	        else
			puts("两个整数相等");
	else if(b==c||a==c)
		puts("两个整数相等");
	else
		puts("三个整数都不相等");
	return 0;
}

