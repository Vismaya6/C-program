#include<stdio.h>
int power(int a,int b){
if (b==0){
return 1;
}

else{
return a*power(a,b-1);
}
}

int main() {
int n1,n2,result;
printf("Enter the base");
scanf("%d",&n1);
printf("Enter the exponent");
scanf("%d",&n2);
result=power(n1,n2);
printf("Result=%d",result);
return 0;
}
