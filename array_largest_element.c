/*
WAP to find largest number using array

*/

#include<stdio.h>
int main()
{
int i,max;
int a[5]={1,2,3,4,5};
printf("enter 5 elememts \n:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<5;i++)
{
if(max<a[i])
	max=a[i];
	
}
printf("You have entered \n");
for(i=0;i<5;i++)
printf("%d\n ",a[i]);
	
printf("largest number is : %d\n ",max);

return 0;
}