#include <stdio.h>
int main(void)
{      int a,b,c,max;
	puts("请输入三个整数。\n");
	printf("整数A：");  scanf("%d",&a);
	printf("整数B："); scanf("%d",&b);
	printf("整数C："); scanf("%d",&c);
	max=a;
	if (b>a)
	    if (c>b)
		max=c;
	    else
		max=b;
        else if(a<c)
		max=c;
	else
		max=a;
        printf("最大值为%d\n",max);
	return 0;
}

