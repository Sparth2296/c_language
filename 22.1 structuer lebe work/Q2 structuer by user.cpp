#include<stdio.h>
#include<string.h>

   
struct Employee{
	
	int emp_id;
	char emp_fs_name[25];
	char emp_sd_name[25];
	int emp_age;
	char emp_role[20];
	char emp_city[50];
	int emp_experience;
	char emp_company_name[50];
	
};

main(){
	
	int n;
	
	printf("Enter the numbers of Employee : ");
	scanf("%d",&n);
	
	struct Employee employee[n];
	
	for(int i=0; i<n; i++){
		
		printf("Enter the Employee Ditels :\n");
		
	    printf("Employee ID : ");
		scanf("%d",&employee[i].emp_id);
		
		printf("Employee NAME : ");
		scanf("%s",&employee[i].emp_fs_name);
		scanf("%s",&employee[i].emp_sd_name);
		
		printf("Employee AGE : ");
		scanf("%d",&employee[i].emp_age);
		
		printf("Employee ROLE : ");
		scanf("%s",&employee[i].emp_role);
		
		printf("Employee CITY : ");
		scanf("%s",&employee[i].emp_city);
		
		printf("Employee EXPERIENCE : ");
		scanf("%d",&employee[i].emp_experience);
		
		printf("Employee COMPANY NAME : ");
		scanf("%s",&employee[i].emp_company_name);
		
		printf("\n");
}

     for(int i=0; i<n; i++){
     	
     	strcat(employee[i].emp_fs_name,employee[i].emp_sd_name);
     	
     	printf("\n EMPLOYEE :%d\n",i+1);
     	printf("EMPLOYEE ID : %d",employee[i].emp_id);
		printf("Employee NAME :%s\n",employee[i].emp_fs_name);
		printf("Employee AGE :%d\n",employee[i].emp_age);
		printf("Employee ROLE :%s\n",employee[i].emp_role);
		printf("Employee CITY :%s\n",employee[i].emp_city);
		printf("Employee EXPERIENCE :%d\n",employee[i].emp_experience);
		printf("Employee COMPANY NAME :%s\n",employee[i].emp_company_name);
		printf("\n");
     	
	 }
}
