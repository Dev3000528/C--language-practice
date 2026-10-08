#include <stdio.h>
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==1){
			printf("1 0 1 0 1");
		} else if(i==2){
			printf("  1 0 1 0");
		}  else if(i==3){
			printf("    1 0 1");
		}  else if(i==4){
			printf("      1 0");
	    }   else if(i==5){
			printf("        1");
		}
		printf("\n");
    } 
}