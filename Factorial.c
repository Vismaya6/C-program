//factorial
#include<stdio.h>
int main(){
  int number,fact; 
  printf("Enter a number:");
  scanf("%d",&number);
  fact=1;
  if (number>0){
    while(number>0){
    fact=fact*number;
    number-=1;
    }
    printf("factorial %d",fact);
  } else{
  printf("Enter a positive number");
  }
 
  
  return 0;
}
  


