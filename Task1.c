//odd or even
#include<stdio.h>
int main(){
    int number;
    printf("Enter an Integer:");
    scanf("%d",&number);
    if (number%2==0){
        printf("The given number is an even number");
    }
    else{
        printf("The given number is an odd number");
    }
    return 0;
}
