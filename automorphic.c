/*************************************************************************

WAPC to input a positive integer.
Check whether it is Automorphic or not.

Note: A number whose square ends with the number itself is an Automorphic number.
Example: 25² = 625 (ends with 25)

****************************************************************************/



#include<stdio.h>
int main()
{
    int num, count=0, i, square, remainder, result=0, j, power=1;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    square = num * num;
    printf("\nThe square of %d is: %d", num, square);

    for(i=num; i>0; i/=10)
    {
        count ++;
    }

    for(i=1; i<count; i++)
    {
        power *= 10;
    }
    
    for(i=1; i<=power; i*=10)
    {
        remainder = square % 10;
        result = result + remainder*i;

        square /= 10;
    }

    printf("\n%d", result);

    if(result==num)
    {
        printf("\n%d is an Automorphic Number.", num);
    }
    else{
        printf("\n%d is NOT an Automorphic Number.", num);
    }
    return 0;
}