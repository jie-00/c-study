#include <stdio.h>
int main(void)
{
	double a;
	printf("请输入您的身高：");
        scanf("%lf",&a);
	printf("您的标准体重是%.1lf公斤。\n",(a-100)*0.9);

	return 0;
}
