/*************************************************************************

WAPC to input a positive integer. 
Check whether it is Happy or not. 

Note: Happy Number - A number that eventually reaches 1 when 
replaced repeatedly by the sum of the squares of its digits. 
Example: 19 → 1²+9²=82 → 8²+2²=68 → 6²+8²=100 … → 1

***************************************************************************/



#include<stdio.h>
int main()
{
    int num, num2, i, digit, result, sum=0, count=0;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    num2 = num;

    while(sum!=1)
    {
         for(i=num2; i>0; i/=10)
        {
           count ++;
        }

        for(i=num2; i>0; i/=10)
        {
           digit = i % 10;
           result = digit * digit;
           sum += result;
           result = 1;
        }
        num2 = sum;
    }   

    printf("\n%d", num2);
return 0;

}
