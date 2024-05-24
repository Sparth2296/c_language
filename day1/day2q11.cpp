#include<stdio.h>
main(){
	float a,b,c;
	
	printf("Enter the value of a,b and c\n");
	
	scanf("%f%f%f",&a,&b,&c);
	
	float avrg = (a+b+c)/3;
	
	printf("the Average of three numbers is %f",avrg);
	
}