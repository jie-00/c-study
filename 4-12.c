#include <stdio.h>
int main(void)
{
	int no,i,n;
	do{
	printf("请输入一个正整数:");
	scanf("%d",&no);
	if(no<=0)
	puts("请不要输入非正整数。");
	}while(no<=0);
	printf("%d的位数是",no);
        n=no;
	i=0;
	do{
	n=n/10;
	i=i+1;
	}while(n>0);
	printf("%d",i);
	return 0;
}

          

