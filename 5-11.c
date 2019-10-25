#include <stdio.h>
int main(void)
{
	int i,j;
	int n1[6][2];
	int sum1=0;
	int sum2=0;
	double p1,p2;
        printf("      语文   数学\n");
	for (i=0;i<6;i++){
	printf("学生%d  ",i+1);
	for (j=0;j<2;j++)
		scanf("%d",&n1[i][j]);
	}
	for(i=0;i<6;i++){
               sum1=sum1+n1[i][0];
               sum2=sum2+n1[i][1];
	}
	printf("       %d   %d\n",sum1,sum2);
	p1=sum1/6;
	p2=sum2/6;
        printf("      %.2f   %.2f\n",p1,p2);
	return 0;
}


