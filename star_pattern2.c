/*
WAP to print pattern

     *
    ***
   *****
  *******
 *********

*/


#include<stdio.h>
int main(){
	int i,j,k,n=5;
	
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
			
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");
			//continue;
			
		}
		
	printf("\n");
		
	}
return 0;	
}