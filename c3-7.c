#include <stdio.h>
int main(void)
{   int a,b,c,d,max;
	printf("请输入四个整数。");
	printf("整数A："); scanf("%d",&a);
	printf("整数B："); scanf("%d",&b);
	printf("整数C："); scanf("%d",&c);
	printf("整数D："); scanf("%d",&d);
   max=a;
   if(a>b)
	   if(c>a)
		   if(d>c)
			   max=d;
                   else
			   max=c;
           else if(a>d)
		   max=a;
           else
		   max=d;
   else if(c>b)
	   if(d>c)
		   max=d;
           else 
		   max=c;
   else if(d>b)
	   max=d;
   else
	   max=b;
   printf("最大值为%d\n",max);
   return 0;
}

