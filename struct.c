/*Author:Vismaya Theresa Benny
  c program to enter student deatlis using struct*/

#include<stdio.h>
struct student{
	int rollno;
	char name[20];
	float cgpa;
	};
	int main(){
	struct student s1;
	printf("Enter the roll no:");
	scanf("%d",&s1.rollno);
	printf("Enter the name:");
	scanf("%s",s1.name);
	printf("Enter the cgpa:");
	scanf("%f",&s1.cgpa);
	printf("The student details:");
	printf("\n name:\t %s",s1.name);
	printf("\n rollno: %d",s1.rollno);
	printf("\n cgpa: \t %f",s1.cgpa);
	return 0;
	}
