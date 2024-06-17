#include<stdio.h>
main(){
	
	int rows;
	
	int i,j;
	
	printf("enter the number how many star you want fo print in pattern :");
	
	scanf("%d",&rows);
	
	for(i=0;i<rows;i++){//outter loop
	
	
		
	for(j=0;j<=i;j++){// inner loop
	
		
		printf("%d ",j+9);	
			
		}
		
	printf("\n");	
		
	}

}

	
	


