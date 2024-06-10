#include<stdio.h>
main(){
	int a,b,c;
	
    printf("Enter the value of a and b :");
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("a = %d \n",a);
    printf("b = %d \n",b);
    
    c=a;
    a=b;
    b=c;
    
    printf("swaping value of a = %d \n",a);
    printf("swaping value of b = %d \n",b);

}
