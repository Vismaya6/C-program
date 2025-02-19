/*Author:Vismaya Theresa Benny
c program to compare two strings
*/
#include<stdio.h>
#include<string.h>
int main(){
char str1[10],str2[10],a;
printf("Enter string1:");
scanf("%s",str1);
printf("Enter a string 2:");
scanf("%s",str2);
if(strcmp(str1,str2)==0){
printf("Equal");}
else{
printf("Not equal");
}
return 0;
}

