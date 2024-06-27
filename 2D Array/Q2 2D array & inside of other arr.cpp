#include<stdio.h>
main(){
      int row ,col;
	  
	  printf("Enter the vsalu of row :");
	  scanf("%d",&row);
	  
	  printf("Enter the vsalu of col :");
	  scanf("%d",&col);
	  
	  
	  int A[row][col],B[row][col];
	  
	  printf("Enter array A's element : \n");
	  
	  
	  for(int i=0; i<row; i++){
	  	
	  	for(int j=0; j<col; j++){
	  		
	  		printf("A[%d][%d] =",i,j);
	  		scanf("%d",&A[i][j]);
	  		
		  }
	  }
	  
	   printf("Enter array B's element :\n ");
	  
	  for(int i=0; i<row; i++){
	  	
	  	for(int j=0; j<col; j++){
	  		
	  		printf("B[%d][%d] =",i,j);
	  		scanf("%d",&B[i][j]);
	  		
		  }
	  }
	  
	  printf("Array C is :\n");
	  
	  for(int i=0; i<row; i++){
	  	
	  	for(int j=0; j<col; j++){
	  	   
			 int c = A[i][j]+B[i][j];
			 printf("%d,",c);
			 	
	  	}
	  	printf("\n");
	  }
	   
}
