/*
Author:Vismaya Theresa Benny
c program to print transpose of a matrix
*/
#include<stdio.h>
int main(){
  int row,col;
  printf("\n Enter the raw and column:");
  scanf("%d%d",&row,&col);
  int m1[row][col];
  printf("\n Enter the elements:");
  for (int i=0;i<row;i++){ 
    for(int j=0;j<col;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  printf("Transpose of the matrix is:\n");
  for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
      printf("%d\t",m1[j][i]);
    }
    printf("\n");
  }
  return 0;
}
