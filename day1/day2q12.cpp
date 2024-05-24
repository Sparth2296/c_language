#include<stdio.h>
main(){
	float F;
	 printf("Enter the temperature in Fahrenheit \n ");
	 
	 scanf("%f",&F);
	 
	 float C = (F-32)*5/9;
	 
	 printf(" convert temperature from Fahrenheit to Celsius is %f",C);
	 
}