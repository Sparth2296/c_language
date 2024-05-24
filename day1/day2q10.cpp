#include<stdio.h>
main(){
	float a,b;
	
	printf("Enter the value of the a and b\n");
	
	scanf("%f%f",&a,&b);
	
	float A = a*a-b*b;
	
	printf ("the value of (a+b)(a-b) %f",A);
}