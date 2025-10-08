/********************************************************************
  
 * WAPC to input the coordinates of two points (x1, y1) and (x2, y2). Calculate the slope and display the same.
  
 *********************************************************************/


#include<stdio.h>
int main()
{
    int x1,x2,y1,y2;
    float slope;

    printf("\nENTER x1 AND y1: \n");
    scanf("%d %d", &x1, &y1);
    printf("\nENTER x2 AND y2: \n");
    scanf("%d %d", &x2, &y2);

    slope=(float)(y2-y1)/(x2-x1);

    printf("\nTHE SLOPE IS: %.2f ", slope);
    return 0;

}