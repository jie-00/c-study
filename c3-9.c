#include <stdio.h>
int main(void)
{    int a,b,c,min;
	puts("请输入三个整数。");
	printf("整数1："); scanf("%d",&a);
	printf("整数2："); scanf("%d",&b);
	printf("整数3："); scanf("%d",&c);
	a>b?min=b:a;
	min>c?min=c:min;
	printf("最小值为%d\n",min);
	return 0;
}
