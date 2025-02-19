#include<stdio.h>
int main(){
  char str1[200];
  int freq[26]={0};
  printf("Enter the string");
  fgets(str1,sizeof(str1),stdin);
  for(int i=0;str1[i] !='\0';i++){
    char ch=str1[i];
    if(str1[i]>='A' && str1[i]<='Z'){
      ch=ch+32;
      }
      if(ch>='a' && ch<='z'){
        freq[ch-97]++;
      }
  }
  for(int i=0;i<26;i++){
    if(freq[i]!=0){
    printf("%c:%d\n",i+97,freq[i]);
    }
    }
    return 0;

}
  
    
    
  



