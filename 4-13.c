#include <stdio.h>
int main(void)
{
	int n,i;
	int sum=0;
	printf("n的值:");
	scanf("%d",&n);
	printf("1到%d的和为",n);
	for(i=0;i<=n;i++){ 
	        sum=sum+i;}
	printf("%d\n",sum);
        return 0;
}	
