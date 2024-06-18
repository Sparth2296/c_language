#include<stdio.h>
main(){
	
	int rows,i,j;
	
	
	printf("Enter the number :");
	scanf("%d",&rows);
	
	
	for(i=0;i<=rows;i++){
		
		for(j=0;j<=rows;j++){
			
			if(j<=i){
				printf(" ");
				
			}else{
				printf("*");
				
			}
		}
			printf("\n");	
	
	}

}
