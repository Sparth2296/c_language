#include<stdio.h>
main(){
	
	int n= 5,sum;
	int array[n][n];
	
	printf("Enter the A's element :\n");
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("Array [%d][%d] =",i,j);
			scanf("%d",&array[i][j]);
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			
			if(i==0 || j==0 || j==4 || i==4){
				sum += array[i][j];
			}
			
		}
	}
	printf("The sum of the bounatry element :%d",sum);
}
