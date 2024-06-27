#include<stdio.h>
main(){
    int n,sum;

    
	printf("Enter the value of row & column size : ");
    scanf("%d",&n);

    printf("Enter the arrae element : \n");
    int a[n][n];
    
    for(int i=0; i<n; i++){
    	
    	for(int j=0; j<n; j++){
    		
    		printf("Enter the value of array [%d][%d] : ",i,j);
    		scanf("%d",&a[i][j]);
    		    		
		}
	}
	
	for(int i=0; i<n; i++){
    	
    	for(int j=0; j<n; j++){
    		
    		if(i==j){
    			
    			sum += a[i][j];
    			
			}
    		    		
		}
	}
	
	
	 printf("\n The sum of diagonal elements of an array :%d",sum);
	 
	
	 
	 

	
	
    
    
}
