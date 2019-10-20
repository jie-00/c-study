#include <stdio.h>
int main(void)
{
	int i,j,l;
	printf("生成直角在左上角的等腰直角三角形\n");
	printf("短边:"); scanf("%d",&l);
	for(i=l;i>=1;i--){
	   for(j=i;j>=1;j--)
	   putchar('*');
	   putchar('\n');
	}
	return 0;
}
