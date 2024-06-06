#include<stdio.h>
main()
	{
	int x,y,sum ;
	
	printf("Enter the value of x and y :");
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	sum = (x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	
	printf("Ans is : %d ",sum);
	


}
