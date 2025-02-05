#include<stdio.h>
int main(){
  int i,n,max,min,position1,position2;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  int number[n];
  printf("enter %d elements:",n);
  for(i=0;i<n;i++){
    scanf("%d",&number[i]);
  }
    max=number[0];
    min=number[0];
    position1=1;
    position2=1;
    for(i=0;i<n;i++){
      if(number[i]>max){
        max=number[i];
        position1=i+1;
      }
          if(number[i]<min){
            min=number[i];
            position2=i+1;
          }
   }
  printf("\n largest=%d found at position %d",max,position1);
  printf("\n smallest=%d found at position %d",min,position2);
  
  return 0;
  }
