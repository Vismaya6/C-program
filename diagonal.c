/*
Author:Vismaya Theresa Benny
c program to make the diagonal elements of a matrix to 0
7/2/25
*/
#include<stdio.h>
int main(){
  int row,col;
  printf("\n Enter the raw and column:");
  scanf("%d%d",&row,&col);
  int matrix[row][col];
  printf("\n Enter the elements:");
  for (int i=0;i<row;i++){ 
    for(int j=0;j<col;j++){
      scanf("%d",&matrix[i][j]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(i==j){
        matrix[i][j]=0;
      }
    printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
