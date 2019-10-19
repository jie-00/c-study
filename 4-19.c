#include <stdio.h>
int main(void)
{
	int a,i,n;
	n=0;
        printf("整数值:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(a%i==0)
		{printf("%d\n",i);
                        n=n+1;}
}	printf("约数有%d个\n。",n);	
        return 0;
	}
