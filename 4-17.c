#include <stdio.h>
int main(void)
{
	int  a,i;
	printf("n的值:");
	scanf("%d",&a);
        for(i=1;i<=a;i++)
		printf("%d的二次方是%d\n",i,i*i);
          return 0;
}

