/**************************************************************
  
 WAPC to input radius and height of a cylinder. Calculate the volume of the cylinder. 
  
 ***************************************************************/


#include<stdio.h>
#define PI 3.14159265359f
 int main()
 {
    float r,h,vol;
    printf("\nENTER THE RADIUS: ");
    scanf("%f",&r);
    printf("\nENTER THE HEIGHT: ");
    scanf("%f",&h);
    vol= PI*r*r*h;
    printf("\nTHE VOLUME OF THE CYLINDER IS: %.2f", vol);
    return 0;
 }