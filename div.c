/***************************************************************** 

WAPC to check and print if a number is divisible by both 3 and 5.

******************************************************************/


#include<stdio.h>
int main()
{
    int num;
    printf("\nENTER A NUMBER: ");
    scanf("%d", &num);

    if(num%3==0 && num%5==0)
    {
        printf("\n%d IS DIVISIBLE BY BOTH 3 AND 5.",num);
    }
    else if(num%3==0 || num%5==0)
    {
        printf("\n%d IS DIVISIBLE BY EITHER 3 OR 5.",num);
    }
    else
    {
        printf("\n%d IS NOT DIVISIBLE BY 3 AND 5.",num);
    }
    return 0;
}
