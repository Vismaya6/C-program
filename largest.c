//Largest of three
#include<stdio.h>
int main(){
  int number1,number2,number3;
  printf("Enter first number:");
  scanf("%d",&number1);
  printf("Enter second number:");
  scanf("%d",&number2);
  printf("Enter third number:");
  scanf("%d",&number3);
  if(number1>number2 ){
    if(number1>number3){
      printf("%d is the largest number",number1);
    }
  }
  else if (number2>number3){
    printf("%d is the largest number",number2);
  }
  else{
    printf("%d is the largest",number3);
  }
  return 0;
}
  
