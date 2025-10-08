/******************************************************************************

WAPC to input a number. If it is positive, check if the number is odd or even.

*******************************************************************************/


#include<stdio.h>
int main()
{
    int num;
    printf("\nENTER A NUMBER: ");
    scanf("%d",&num);

    if(num>0)
    {
        if (num%2==0)
        {
            printf("\n%d IS AN EVEN NUMBER.",num);
        }
        else
        {
            printf("\n%d IS AN ODD NUMBER.",num);
        }
    }
    else
    {
        printf("\n%d IS NOT A POSITIVE NUMBER.",num);
    }
    return 0;
}