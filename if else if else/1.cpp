#include<stdio.h>
main(){
	int mark ;
	printf("Enter the mark :");
	scanf("%d",&mark);
	
    if(mark <=100 && mark>=90){
    	printf("A+ Grade");
    	
	}else if(mark <=90 && mark>=80){
		
		printf("A Grade");	
		
	}else if(mark <=80 && mark>=70){
		
		printf("B Grade");	
		
	}else if(mark <=70 && mark>=60){
		
		printf("C Grade");	
		
	}else if(mark <=60 && mark>=50){
		
		printf("D Grade");
			
	}else if(mark <=50 && mark>=40){
		
		printf("E Grade");
			
	}else if(mark <=40 && mark>=33){
		
		printf("F Grade");
			
	}else {
		
		printf("Rehnedo Beta Tumse Naaa Hopayegaaa ... ");
	}			

}
