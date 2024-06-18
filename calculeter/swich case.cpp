#include<stdio.h>
main(){
	int num,A,B;
	float sum;
	
	printf("1.ADDITION\n");
	
	printf("2.SUBSTETION\n");
	
	printf("3.MULTIPLICATION\n");
	
	printf("4.DIVITION\n");
	
	printf("Enter  the number what you want to claculet :");
	
	scanf("%d",&num);
	
if(num<=4){
	printf("Enter the number A :");
			
			scanf("%d",&A);
			
			printf("Enter the number B :");
			
			scanf("%d",&B);
	
}	
	
	
	
switch (num) {
		
		case 1 :
		
			
			sum = A+B;
			
			printf("Your total is : %f",sum);
			
			break;
			
		case 2 :
		
			sum = A-B;
			
			printf("Your total is : %f",sum);
			
			break ;
			
		case 3 :
			
			sum = A*B;
			
			printf("Your total is : %f",sum);
			
			break ;			
			
			
		case 4 :
			
			
			sum = A/B;
			
			printf("Your total is : %f",sum);
			
			break ;		
			
		default :
		    printf("your number is not valide");
			
				
			
	}
	
	

}
