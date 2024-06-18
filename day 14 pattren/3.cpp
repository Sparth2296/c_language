#include<stdio.h>
main(){
	
	int rows,i,j;
	char A[]="parth";
	
	printf("Enter the number :");
	scanf("%d",&rows);
	
	
	for(i=0;i<rows;i++){
		
		for(j=0;j<rows;j++){
			
			if(j<i){
				printf(" ");
				
			}else{
				printf("%c",A[j]);
				
			}
		}
			printf("\n");	
	
	}

}
