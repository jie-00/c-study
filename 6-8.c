#include <stdio.h>
int min_of(const int v[],int n)
{
	int i;
	int min;
	min=v[0];
	for(i=0;i<n;i++)
  {        if(v[i]<min)
	  min=v[i];
	  }
	return min;
}
int main(void)
{
	int v[5]={1,2,3,4,5};
	printf("%d\n",min_of(v,5));
return 0;
}

