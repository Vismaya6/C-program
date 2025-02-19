  #include<stdio.h>
  #include<string.h>
  int main (){
  char str1[20];
  int length;
  printf("Enter a string:");
  fgets(str1,sizeof(str1),stdin);
  for(length=0;str1[length]!='\0';length++);
  int i=length-1;
  for(int j=0;j<length/2;j++){
  char temp=str1[i];
  str1[i]=str1[j];
  str1[j]=temp;
  i--;
  }
  printf("The reverse string is %s",str1);
  return 0;
  }
