#include<stdio.h>
main(){
	float p,r,n;
	printf("Enter value fo p,r and n");
	
	scanf("%f%f%f",&p,&r,&n);
	
	float S_I = p*r*n/100;
	
	printf("this is the simple interest %f",S_I);
}