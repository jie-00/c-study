#include <stdio.h>
#define NUMBER 80
int main(void)
{
	int i,j;
	int num;
	int tensu[NUMBER];
	int bunpu[11]={0};
	int max=0;
	int max1=0;
	int v[11];

	printf("请输入学生人数:");
	do {
		scanf("%d",&num);
		if(num<1||num>NUMBER)
			printf("\a请输入1~%d的数:",NUMBER);
	}while (num<1||num>NUMBER);
	printf("请输入%d人的分数。\n",num);
	for(i=0;i<num;i++){
		printf("%2d号:",i+1);
		do{
			scanf("%d",&tensu[i]);
			if(tensu[i]<0||tensu[i]>100)
				printf("\a请输入1~100的数:");
		}while (tensu[i]<0||tensu[i]>100);
		bunpu[tensu[i]/10]++;
	}
	puts("\n---分布图---");
	for(i=10;i>=0;i--){
        	for(j=0;j<bunpu[i];j++)
			max1=max1+1;
		v[i]=max1;
		max=max>v[i] ? max:v[i];
	}
	printf("%d",max);
	for(i=max;i>0;i--){
		for(j=10;j>=0;j--){
			if(v[j]>=i)
				puts(" ");
		        else
				puts("*");
		}
		putchar('\n');
	}return 0;
}



