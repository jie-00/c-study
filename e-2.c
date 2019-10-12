#include <stdio.h>
int main(void)
{    
	int x,a,b,c,d;
	printf("请输入一个数:");
	scanf("%d",&x);
     if (1000<x&&x<9999)
       {     a=x%10;
             d=x/1000;
	     c=(x-d*1000)/100;
	     b=(x-d*1000-c*100)/10;
	     printf("个位数为：%d\n",a);
             printf("十位数为：%d\n",b);
             printf("百位数为：%d\n",c);
             printf("千位数为：%d\n",d);}
      else
	    puts("您输入的不是四位数。");
     	     return 0;
}


