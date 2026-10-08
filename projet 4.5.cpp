#include <stdio.h>
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		if(i==1){
			printf("        5        ");
		} else if(i==2){
			printf("      4 5 4      ");
		}  else if(i==3){
			printf("    3 4 5 4 3    ");
		}  else if(i==4){
			printf("  2 3 4 5 4 3 2  ");
	    }   else if(i==5){
			printf("1 2 3 4 5 4 3 2 1");
		}
		printf("\n");
    } 
}