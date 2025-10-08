/***************************************************************************************
WAPC to input a positive integer. Assume that the number is of 3 digits.
Check and print if the number is Armstrong or not.

Note: An Armstrong number is a number that is equal to the sum of 
its own digits each raised to the power of the number of digits,
for example, 153 = 1³ + 5³ + 3³.

******************************************************************************************/



#include<stdio.h>
#include<math.h>
int main()
{
    int num, i, sum=0, count=0, digit, result=1, j;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(i=num; i>0; i/=10)
    {
        count++;
    }

    printf("\n%d has %d digits\n", num, count);

    for(i=num; i>0; i/=10)
    {
        digit = i % 10;

        for(j=count; j>0; j--)
        {
            result *= digit;
        }
        sum += result;
        
        result = 1;
    }

    printf("\nThe sum of digits raised to power %d is: %d", count, sum);
    return 0;
}