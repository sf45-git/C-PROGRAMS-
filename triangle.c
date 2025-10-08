/****************************************************************

 WAPC to check if a triangle is valid or not. 
 If it is valid, check and print if it is isosceles, scalene or equilateral.
 
*****************************************************************/


#include<stdio.h>
int main()
{
    int side1, side2, side3;
    printf("\nENTER 3 SIDES OF THE TRIANGLE:\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 < side2 + side3)
    {
        if(side1==side2 && side1==side3 && side2==side3)
        {
            printf("\nIT IS AN EQUILATERAL TRIANGLE.");
        }
        else if(side1==side2 || side1==side3 || side2==side3)
        {
            printf("\nIT IS AN ISOSCELES TRIANGLE.");
        }
        else
        {
            printf("\nIT IS A SCALENE TRIANGLE.");
        }
    }
    else
    {
        printf("\nIT IS NOT A VALID TRIANGLE.");
    }
    return 0;
}