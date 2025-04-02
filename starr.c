/*Author:Vismaya Theresa Benny
  c program to enter employee details using struct*/
#include<stdio.h>
typedef struct{
int id;
char name[20];
float salary;
}employee;
int main(){
int n;
printf("Enter the limit:");
scanf("%d",&n); 
employee s[n];
for(int i=0;i<n;i++){
printf("\nEnter the id:");
scanf("%d",&s[i].id);
printf("\nEnter the name:");
scanf("%s",s[i].name);
printf("\nEnter the salary;");
scanf("%f",&s[i].salary);
}
printf("\n The employee details:");
for(int i=0;i<n;i++){
printf("\n name   :%s",s[i].name);
printf("\n id     :%d",s[i].id);
printf("\n salary :%f",s[i].salary);
}
return 0;
}
