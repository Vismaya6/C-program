#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if (age>=18){
        printf("Congratulations! You are eligible for casting your vote.");
    }
    else{
        printf("You are not eligible");
    }
    return 0;
}

