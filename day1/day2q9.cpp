#include<stdio.h>
main(){
	float a,b;
	
	printf("Enter the value of a and b\n");
	
	scanf("%f%f",&a,&b);
	
	float A = a*a-2*a*b+b*b;
	
	printf("the value of (a-b)*(a-b) %f",A);
	 
}