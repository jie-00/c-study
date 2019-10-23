#include <stdio.h>
int main(void)
{
	int i,j;
	int n1[4][3];
	int n2[4][3];
	int m[4][3];
        printf("请输入第一矩阵\n");

	for (i=0;i<4;i++){
		for(j=0;j<3;j++)
			scanf("%4d",&n1[4][3]);
               putchar('\n');
	}
	printf("请输入第二矩阵\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
			scanf("%4d",&n2[i][j]);
		putchar('\n');
	}
	printf("乘积：\n");
	for (i=0;j<4;i++){
		for(j=0;j<3;j++){
			m[i][j]=n1[i][j]*n2[i][j];
                        printf ("%4d",m[i][j]);
			putchar('\n');
		}}
	return 0;
}

