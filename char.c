#include<stdio.h>
int main(){
  char value;
  printf("\nEnter a character in capital letters :");
  //scanf("%c",&s);
  value=getchar();
  value=value+32;
  printf("lower case letter:%c\n",value);

  return 0;
}
