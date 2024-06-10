#include<stdio.h>
main(){
	
	int a,b;
	
	printf ("Enter the value of a and b :");
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf ("a = %d \n ",a);
	printf ("b = %d \n ",b);

    a=a+b;
    b=a-b;
    a=a-b;

	printf ("swaping value of a = %d \n ",a);
	printf ("swaping value of b = %d \n ",b);
}
