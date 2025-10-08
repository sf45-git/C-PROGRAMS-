/*********************************************************************************

WAPC to input a positive integer. 
Check and print if the number is perfect or not.

Note: Perfect number is a number which is equal to 
the sum of all its proper divisors (excluding itself). 
Example: 28 = 1 + 2 + 4 + 7 + 14

************************************************************************************/




#include<stdio.h>
int main()
{
    int num, i, sum=0;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    printf("\nThe divisors of %d are: ", num);

    for(i=1; i<num; i++)
    {
        if(num%i==0)
        {
            sum += i;
            printf("\n%d",i);
        }
    }
    printf("\nThe sum of all divisors is: %d", sum);

    if(sum==num)
    {
        printf("\n%d is a Perfect Number.", num);
    }
    else{
        printf("\n%d is NOT a Perfect Number.", num);
    }
    return 0;
}