#include<stdio.h>
main(){
    int arr,sum;
    float average;
    
    printf("Enter the Array size : ");
    scanf("%d",&arr);
    
    int Array[arr];
    
    for(int i=0; i<arr; i++){
    	
    	printf("a[%d] = ",i);
    	scanf("%d",&Array[i]);
    	
    	sum += Array[i];
    	
	}
	
	average = sum/5;
	
	printf("Average of an Array : %f",average);
}
