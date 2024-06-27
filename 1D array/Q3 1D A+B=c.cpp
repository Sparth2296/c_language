#include<stdio.h>
main(){
	int array_size;
   
   printf("enter the array size : ");
   scanf("%d",&array_size);
   
   
  int A[array_size],B[array_size];
  
  printf("Enter the Array A's elements : \n");
  
  
   
   for(int i=0; i<array_size; i++){
   	    
   	    printf("A[%d] = ",i);
   	    scanf("%d",&A[i]);
   	    
   }
   
   
   printf("Enter the Array B's elements : \n");
   
   for(int i=0; i<array_size; i++){
   	    
   	    printf("B[%d] = ",i);
   	    scanf("%d",&B[i]);
   	    
}
   
   printf("Array C is :\n");
   
   for(int i=0; i<array_size; i++){
   	    
   int c = A[i]+B[i];
   
   printf("%d\n",c);

}
}
