#include<stdio.h>
main(){
	int sum=0;
	int number; 
	
	
 do {
    printf("Enter your number :");
    
	scanf("%d",&number);
	
    sum +=number;
 	if(number!=0){

 		
	 }else{
	 	printf("sum = 0\n");
	 }
 	
 }while(number!=0);
  		 printf("sum = %d",sum);


}
