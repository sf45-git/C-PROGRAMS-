/*******************************************************************

WAPC to input a positive integer.
Check whether the number is Sunny or not.

Note: Sunny Number – A number for which the next number is a perfect square.
Example: 8 (since 8+1=9 which is 3²)

**************************************************************/



#include<stdio.h>
int main()
{
    int num, i, next, flag;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    next = num + 1;

    if(next < 0)
    {
        flag = 0;
    }
    else if(next == 0)
    {
        flag = 1;
    }

    for(i=1; i*i<=next; i++)
    {
        if(i*i == next)
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        printf("\n%d is a Sunny Number (because %d + 1 = %d is a perfect square.)", num, num, next);
    }
    else
    {
        printf("\n%d is NOT a Sunny Number (because %d + 1 = %d is NOT a perfect square.)", num, num, next);
    }
    return 0;

}