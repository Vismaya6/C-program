#include<stdio.h>
#define PI 3.14159
int main(){
int r1,r2,height;
printf("Enter the radius of circle:");
scanf("%d",&r1);
printf("Enter the radius of the cylinder:");
scanf("%d",&r2);
printf("Enter the height:");
scanf("%d",&height);
int circle_area=PI*r1*r2;
printf("Area of circle =%d",circle_area);
int cylinder_area=2*PI*r2*height;
printf("Area of cylinder=%d",cylinder_area);
return 0;
}
