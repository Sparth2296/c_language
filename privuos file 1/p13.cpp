#include<stdio.h>
#include<string.h>
main(){
	char name [128];
	int i=0 ;
	
	printf("Enter your name:");
	scanf("%s",&name);
	int l= strlen (name);
	
	while(i<l){
		printf("index no : %d %c \n",i,name[i]);
		i++;
	}
	
}
