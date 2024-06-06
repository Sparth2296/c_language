#include<stdio.h>
main(){
	int money;
	printf("Enter your numer of money what you have:");
	
	scanf("%d",&money);
	char name[128];
	int total;
	int Milk,Soda,Chips;
	if(money>= 500){
		
		printf("Wellcom ");
		
		printf("Enter Your name :\n");
		
		scanf("%s",&name);
		
		printf("Enter Your product price :\n");
		
		printf("Milk:");
		scanf("%d",&Milk);
		
		printf("Soda:");
		
		scanf("%d",&Soda);
		
		printf("Chips:");
		scanf("%d",&Chips);
		
		 total=Milk+Soda+Chips;
		
		printf("Your total is; %d\n",total);
		
		if (total<=money){
			printf("Thank you for sopping");
		}else{
		
			 int msg =	total - money;
			 printf("you have insaficient balance of  %d",msg);
		}
		
		
		
		
		
		
		
	}else{
		printf("sorry , you have not enough poket money in your card");
	}


}