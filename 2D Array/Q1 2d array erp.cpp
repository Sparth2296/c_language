#include<stdio.h>
main(){
    int x,y,sum;
    float avreg;
    
	printf("Enter the value of row(x) :");
    scanf("%d",&x);
    
    printf("Enter the value of rcol(y) :");
    scanf("%d",&y);
    
    int array[x][y];
    
    for(int i=0; i<x; i++){
    	
    	for(int j=0; j<y; j++){
    		
    		printf("Enter the value of array [%d][%d] : ",i,j);
    		scanf("%d",&array[x][y]);
    		
    		 sum +=array[x][y];
    		
    		
		}
	}
	 
	
	 
	 
	avreg = sum/9;
	
	printf("Avrege of an array :%f",avreg);
	
	
    
    
}
