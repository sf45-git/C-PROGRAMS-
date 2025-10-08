/***************************************************************************
  
WAPC to input a positive integer from the user.
Find and display the number of digits in the number,
sum of the digits of the number and product of the digits of the number. 
  
*****************************************************************************/



#include<stdio.h>
int main()
{
    int num, num2, pro=1, sum=0, i, count=0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    
    for(i=num ; i>0 ; i/=10)
    {
        sum += i % 10;
        pro *= i % 10;
        count ++;
    } 


    printf("\n%d has %d digits.", num, count);
    printf("\nThe sum of digits is: %d", sum);
    printf("\nThe product of digits is: %d", pro); 
    return 0;
}