#include <stdio.h>
int main(void)
{
	int a,i;
	printf("正整数:");
	scanf("%d",&a);
	i=a;
	do{
		if(i/2==0)
		    printf("+ ");
	        else
			printf("- ");
                i=i-1;
	}while(i>0);
	return 0;
}
