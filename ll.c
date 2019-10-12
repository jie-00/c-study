#include <stdio.h>
int main(void)
{
	int num;
	printf("请输入一个整数:");
	scanf("%d",&num);

	if (num==0)
		puts("绝对值为0。");
	else if (num>0)
		printf("绝对值为%d。\n",num);
	else
		printf("绝对值为%d。\n",-num);
	return 0;
}
