#include <stdio.h>
int cude(int x)
{
	return x*x*x;
}
int main(void)
{
	int x=3;
	printf("%d",cude(x));
	return 0;
}
