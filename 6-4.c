#include <stdio.h>
int spr(int x)
    {
	    return x*x;
    }
int pow4(int x)
{
	return spr(x)*spr(x);
}
int main(void)
{	int x=3;
	printf("%d\n",pow4(x));
	return 0;
	}
