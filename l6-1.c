#include <stdio.h>
int max3(int a,int b,int c)
{
	int max=a;
	if (b>max) max=b;
	if(c>max) max=c;
	return max;
}
int main(void)
{
	int a=1;
	int b=2;
	int c=3;
	printf("%d",max3(a,b,c));
	return 0;
}
