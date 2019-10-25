#include <stdio.h>
int sump(int n)
{
	int i;
	int sum=0;
	for(i=1;i<=n;i++)
		sum=sum+i;
	return sum;
}
int main(void)
{
	int n;
	puts("请输入一个正数:");
	scanf("%d",&n);
	printf("1到%d之间所有整数的和:%d",n,sump(n));
	return 0;
}
