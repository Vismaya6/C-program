/*
Author:Vismaya Theresa Benny
c program to convert decimal to binary*/
#include<stdio.h>
int main (){
int bin=0,rem,i=1,n;
printf("Enter a number");
scanf("%d",&n);
while(n>0){
rem=n%2;
bin=rem*i+bin;
i=i*10;
n=n/2;
}
printf(" %d ",bin);
return 0;
}


