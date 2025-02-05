#include<stdio.h>
int main(){
  int i,n,item;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  int array[n];
  printf("enter %d elements:",n);
  for(i=0;i<n;i++){
  scanf("%d",&array[i]);
  }
  printf("\n Enter the element to search:");
  scanf("%d",&item);
  for(i=0;i<n;i++){
  if(item==array[i]){
  printf("\n The given element found at position: %d",i+1);
  }
  }
  return 0;
  }
