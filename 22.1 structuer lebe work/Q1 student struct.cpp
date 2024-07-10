#include<stdio.h>
#include<string.h>

struct Student{
	int  stu_id;
	char stu_name[50];
	int  stu_age;
	char stu_course[50];
	char stu_city[50];
	int  stu_standard;
	char stu_school[100];
	
};

main(){
	
	struct Student student[3]={
		
		{258,"Solanki Parth Mukeshabhai",18,"Full stack development","Amreli",12,"Deepak high school"},
		{259,"jethava Yax Pravinabhai",18,"Full stack development","Amreli",12,"Deepak high school"},
		{260,"Pandiya Preet Vipulabhai",18,"UI UX ","Amhadavad",12,"Deepak high school"}
	};
	
	for(int i=0; i<3; i++){
		
		printf("Student :%d\n",i+1);
		printf("stu_id is :%d\n",student[i].stu_id);
		printf("stu_name is :%s\n",student[i].stu_name);
		printf("stu_age is : %d\n",student[i].stu_age);
		printf("stu_course is :%s\n",student[i].stu_course);
		printf("stu_city is :%s\n",student[i].stu_city);
		printf("stu_standard is :%d\n",student[i].stu_standard);
		printf("stu_school is :%s\n",student[i].stu_school);
		printf("\n");
		
		}
		

}
