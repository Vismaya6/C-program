/*Author:Vismaya Theresa Benny
c program to find product
*/
#include<stdio.h>
int product(int,int);
int main() {
int a,b,result;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
result=product(a,b);
printf("The product =%d",result);
return 0;
}
int product(int n1,int n2){
int res;
res=n1*n2;
return res;
}
