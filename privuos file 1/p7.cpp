#include<stdio.h>
main(){
	int money;
	printf("Enter your numer of money what you have:");
	
	scanf("%d",&money);
	char name[128];
	int total;
	int Milk,Soda,Chips;
	int tf;
	int add_money=0;
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
		
			 tf =	total - money;
			 printf("you have insaficient balance of  %d \n",tf);
		}
		if(tf<total){
			
			printf("add money");
			
			scanf("%d",&add_money);
			
			add_money+=money;
			
			printf("your new pocket money is : %d",add_money);
			
			tf= add_money+money;
			
			if(tf>= money){
				printf("Thank you for sopping and Wellcome agein to buy other product sir \n ");
				
				
			}else{
		    	printf("sorry You have not insafisiyent money so please add more money in your pocet / recharge your card .");

			}
			
			
		}else{
			
			
		
		
		}
		
		
			
		
		
		
		
	}else{
		printf("sorry, you do not have enough money");
	}


}
