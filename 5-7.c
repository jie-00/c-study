#include <stdio.h>
#define NUMBER 10
int main(void)
{
	int i,j;
	int num;
	int n[NUMBER];
	do{
	printf("数据个数:");  scanf("%d",&num);
		if(num>NUMBER||num<1)
			printf("\a请输入1-%d的数:",NUMBER);
	}while (num<1||num>NUMBER);
	
		for(i=1;i<=num;i++){
	printf("%d号:",i);
      	scanf("%d",&n[i-1]);
		}	putchar('{');
	for (j=1;j<=num;j++)
		printf("%d,",n[j-1]);
	printf("}\n");
        return 0;
}


