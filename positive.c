/******************************************************************************

WAPC to input two numbers. Check if either of the two inputs is positive.

*******************************************************************************/


#include<stdio.h>
int main()
{
    int num1, num2;
    printf("\nENTER 2 NUMBERS: \n");
    scanf("%d %d", &num1, &num2);

    if(num1>0 && num2>0)
    {
        printf("\nBOTH NUMBERS ARE POSITIVE.");
    }
    else if(num1>0 || num2>0)
    {
        printf("\nONLY ONE OF THE NUMBERS IS POSITIVE.");
    }
    else
    {
        printf("\nBOTH NUMBERS ARE NEGATIVE.");
    }
    return 0;
}