\*Author:Vismaya Theresa Benny
c program to find even or not
*\
#include<stdio.h>
int iseven(int);
int main() {
int n,res;
printf("Enter a number:");
scanf("%d",&n);
res=iseven(n);
if(res==1){
printf("Even");
}
else{
printf("Not even");
}
return 0;
}
int iseven(int a){
if (a%2==0){
return 1;
}
else{
return 0;
}
}

