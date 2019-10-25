#include <stdio.h>
void put_count()
{
	static int count=0;
	++count;
	printf("第%d次", count);
}
int main()
{
put_count();
	put_count();
return 0;
}
