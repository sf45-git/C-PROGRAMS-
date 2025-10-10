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

    while(num2 > 0 )
    {
      sum = 0;
        for(i=num2; i>0; i/=10)
        {
           digit = i % 10;
           sum += digit * digit;
        }
        num2 = sum;
        printf("\nSum: %d", sum);

        if(num2 / 10 == 0 && num2 != 1)
        {
         result = 0;
         break;
        }
        while(num2 % 10 == 0)
        {
           num2 /= 10;
        }
       if(num2 == 1)
        {
          result = 1;
          break;
        }
        num2 = sum;
      }   
    

    if(result == 1)
    {
      printf("\n%d is a Happy Number.", num);
    }
    else
    {
      printf("\n%d is NOT a Happy Number.", num);
    }
    
return 0;

}
