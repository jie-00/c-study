#include <stdio.h>
int min2(int a,int b)
{	int min=a;
	if (b < min) 
	min = b ;
	return min;
	}

int main(void)
{
	int a=1;
	int b=3;
	printf("%d\n",min2(a,b));
	return 0;
}
