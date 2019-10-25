#include <stdio.h>
int search(int v[], int key,int n)
{
        int i;
        v[n]=key;
        for(i=0;v[i]=key;i++)

         	return i;
}
int main(void)
{       int v[5]={1,4,2,3,4};
	int key=4;
	int n=5;
	printf("%d",search(v,key,n));
 return 0;
}
