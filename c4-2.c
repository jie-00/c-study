#include <stdio.h>
int main(void)
{  
	int a1,a,b,sum;
	printf("请输入两个整数。\n");
	printf("整数A："); scanf("%d",&a);
	printf("整数B："); scanf("%d",&b);
	sum=0;
	a1=a;
	do{
	   sum=sum+a1;
	   a1=a1+1;
         }while(a1<=b);
       printf("大于等于%d小于等于%d的所有整数的和是%d。\n",a,b,sum);
   return 0;
}   
