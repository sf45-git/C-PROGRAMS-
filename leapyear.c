/******************************************************************************

WAPC to input a year. Check and display if it is a leap year or not.

*******************************************************************************/


#include<stdio.h>
int main()
{
    int year;
    printf("\nENTER THE YEAR: ");
    scanf("%d",&year);

    if(year%100!=0)
    {
        if(year%4==0)
        {
            printf("\n%d IS A LEAP YEAR.",year);
        }
        else 
        {
            printf("\n%d IS NOT A LEAP YEAR.",year);
        }
    }
    else if(year%100==0)
    {
        if(year%400==0)
        {
            printf("\n%d IS A LEAP YEAR.",year);
        }
        else
        {
            printf("\n%d IS NOT A LEAP YEAR.",year);
        }
    }
    return 0;

}