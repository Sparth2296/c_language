#include<stdio.h>
main(){
	int x,y,sum;
	
	printf("Enter the value of x and y : \n");
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	sum= (x*x)-(2*x*y)+(y*y);
	
	printf(" Ans is : %d",sum);

}
