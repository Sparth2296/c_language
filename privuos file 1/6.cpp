#include<stdio.h>
main(){
	
	int a,b,c,sum;
	
	printf("enter the marks of maths :");
	scanf("%d",&a);
	
	printf("enter the marks of gujarati:");
	scanf("%d",&b);
	
	printf("enter the marks of scienc :");
	scanf("%d",&c);
	
	sum = (a+b+c)/3;
	printf("avreg is :%d",sum);
	
	if(sum>33){
		printf("pass");
	}else{
		printf("fail");
	}
	
	
	
	

}
