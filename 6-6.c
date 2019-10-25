#include <stdio.h>
void alert (int n)
{
	int i;
	for(i=0;i<n;i++)
		putchar('\a');
}
int main(void)
{
	int n;
	printf("输入:");
	scanf("%d",&n);
	alert(n);
	return 0;
}
