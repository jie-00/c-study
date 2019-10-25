#include <stdio.h>
int min3(int a,int b,int c)
{	int min=a;
	if(b<min) min=b;
	if(c<min) min=c;
	return min;
	}
int main(void)
{
	int a=1;
	int b=2;
	int c=3;
	printf("%d",min3(a,b,c));
	return 0;
}
