/*Author:Vismaya Theresa Benny
  c program to enter student mark details to find average using struct*/
#include<stdio.h>
typedef struct{
int id;
char name[20];
float mark1,mark2,mark3;
}student;
int main(){
int n;
printf("Enter the limit:");
scanf("%d",&n); 
student s[n];
for(int i=0;i<n;i++){
	printf("\nEnter the id:");
	scanf("%d",&s[i].id);
	printf("\nEnter the name:");
	scanf("%s",s[i].name);
	printf("\nEnter the mark1;");
	scanf("%f",&s[i].mark1);
	printf("\nEnter the mark2;");
	scanf("%f",&s[i].mark2);
	printf("\nEnter the mark3;");
	scanf("%f",&s[i].mark3);

}
int total=0;
for(int i=0;i<n;i++){
	total+=s[i].mark1+s[i].mark2+s[i].mark3;}
int ave=total/n;
printf("\n total marks :%d",total);
printf("\n average mark:%d",ave);

return 0;
}
