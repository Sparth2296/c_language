#include<stdio.h>
main(){
	float number;
	
	printf("Enter the nember what you want to square\n");
	
	scanf("%f",&number);
	
	float sq = number*number;
	
	printf("The square of %f",sq);
}