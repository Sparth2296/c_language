#include<stdio.h>
main(){

   int n;
   
   printf("Enter the elements of array in n : ");
   scanf("%d",&n);
   
   int array[n];
   
   for(int i=0; i<n; i++){
   	   printf("Enter the array value :%d\n",i+1);
   	   scanf("%d",&array[i]);
   }
   	   
   	   for(int i=0; i<n; i++){
   	   	printf("%d\n",array[i]);
		  }
   	   	
   	   	
		  
   }
   
   

