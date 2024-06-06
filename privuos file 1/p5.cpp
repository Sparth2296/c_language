#include<stdio.h>
#include<string.h>

main(){

char a [128]; // name
int total = 0; // sum of all subject marks
int marks[128]; // marks
char *subject[]= {"Maths","Science","gujarati","computer","hindi"};

printf("Enter your name : ");

scanf("%[^\n]s",&a);

printf("You have enter you name : %s \n",a);

for(int i=0; i <= 4; i++){

printf("%s\n",subject[i]);
	scanf("%d",&marks[i]);
	total += marks[i];
}
printf("your total marks are %d\n",total);

float pr=total/5;
printf("Your pr are %.2f",pr);
}


