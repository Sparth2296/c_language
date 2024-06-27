#include<stdio.h>
main(){

   int array_size;
   
   printf("enter the array size : ");
   scanf("%d",&array_size);
   
   
   int array[array_size];
   
   for(int i=0; i<array_size; i++){
   	    
   	    printf("a[%d] = ",i);
   	    scanf("%d",&array[i]);
   	    
   }
   printf("Length of an Array : %d",array_size);
   
   
}
