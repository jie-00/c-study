#include <stdio.h>
int main(void)
{
	int no,i;
	do{
		printf("请输入一个正整数：");
		scanf("%d",&no);
		if(no<=0)
			puts("\a请不要输入非正整数。");
	}while (no<=0);
	printf("%d",no);
	printf("的逆向显示的结果是:");
        i=no;
	while (i>0){
		printf("%d",i%10);
                i/=10;
	}
	puts("。");
	return 0;
}
