//simplecalculator
#include<stdio.h>
int main(){
  int number1,number2,mod,product,sum,difference,div;
  char operation;
  printf("Enter two numbers:");
  scanf("%d%d",&number1,&number2);
  printf("select an operation ");
  scanf(" %c", &operation);
  switch(operation)
  {
  case '+':
  sum=number1+number2;
  printf("sum %d",sum);
  break;
  case '-':
  difference=number1-number2;
  printf("difference %d",difference);
  break;
  case '/':
  div=number1/number2;
  printf("Answer %d",div);
  break;
  case '*':
  product=number1*number2;
  printf("product %d",product);
  break;
  case '%':
  mod=number1%number2;
  printf("mod %d",mod);
  break;
  default:
  printf("Error");
  break;
  }
  return 0;
  }
