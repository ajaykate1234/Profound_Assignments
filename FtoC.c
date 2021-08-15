#include<stdio.h>
int main(){
//convert Fahrenheit temp in degree Celsius
float f,x,y;
printf("\nEnter Temperature in Fahrenheit ");
scanf("%f",&f);
x=f-32;
y=x*5;
printf("\nConverted to celcuis = %f celcius",(y/9));
return 0;
}