#include <stdio.h>
void intary_rcpy (int v1[],const int v2[],int n)
{
	int i;
	for(i=0;i<n;i++)
		v1[i]=v2[n-i-1];
}
int main(void)
{
	int v1[5];
	int v2[]={1,2,3,4,5};
        int i;
	intary_rcpy(v1,v2,5);
       for (i=0;i<5;i++)
	printf("%2d",v1[i]);
       puts("\n");
       for (i=0;i<5;i++)
	printf("%2d",v2[i]);
       puts("\n");
	return 0;
}
