/******************************************************************************

WAPC to input a positive integer. Check whether it is Niven or not.

Note: Niven number – A number divisible by the sum of its digits. 
Example: 18 ÷ (1+8) = 2

******************************************************************************/


#include<stdio.h>
int main()
{
    int num, i, num2, count, sum=0;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    num2 = num;

    for(i=num; i>0; i/=10)
    {
        sum= sum + (num2 % 10);
        count ++;
        num2 /= 10;
    }
    printf("\nThe sum of digits of %d is: %d", num, sum);

    if(num%sum == 0)
    {
        printf("\n%d is a Niven Number.", num);
    }
    else{
        printf("\n%d is NOT a Niven Number.", num);
    }
}