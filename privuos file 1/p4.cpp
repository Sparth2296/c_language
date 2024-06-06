#include<stdio.h>
#include<string.h>

main(){
	char  name[128];
	printf("Enter your name");
	scanf("%[^\n]s",&name);
	
	int l= strlen (name);
	
	
	for (int i=0; i<=l; i++) {
		
		printf("index %d %c\n",i,name[i]);
	}
	
	

}
