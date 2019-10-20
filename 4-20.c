#include <stdio.h>
int main(void)
{
	int i,j,e;

	for(i=-1;i<=9;i++){
		if(i==-1){
			printf(" |");
		        for(e=1;e<=9;e++)
				printf("  %d",e);
  	       }else if(i==0)
		      	printf("\n------------------------------\n");
		else{
		for(j=-1;j<=9;j++)
			if(j==-1)
				printf("%d",i);
		        else if (j==0)
				printf("|");
		        else
			printf("%3d",i*j);
	         putchar('\n');
		}
	}
	return 0;
}
