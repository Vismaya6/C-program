#include<stdio.h>
int sumarray(int[],int);
int main(){
int limit,sum;
printf("Enter the limit:");
scanf("%d",&limit);
int array[limit];
sum=sumarray(array,limit);
printf("%d",sum);
return 0;
}
int sumarray(int array[],int limit){
int sum=0;
printf("Enter elements:");
for(int i=0;i<limit;i++){
scanf("%d",& array[i]);
}
for(int i=0;i<limit;i++){
sum=sum+array[i];
}
return sum;
}


