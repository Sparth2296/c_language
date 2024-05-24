#include<stdio.h>
main(){
	float b,h;
	float o_t =0.5;
	
	printf("Enter a value of b and h\n");
	
	scanf("%f%f",&b,&h);
	
	float hight = o_t*b*h;
	printf("this is the area of a trianglr %f",hight);
}