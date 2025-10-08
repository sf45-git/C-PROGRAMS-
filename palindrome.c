/*******************************************************************
  
 WAPC to input a positive integer from the user. 
 Check and print if the number is palindrome or not. 
 Note: A palindrome number is a number that remains the same when its digits are reversed, for example, 121.
  
*********************************************************************/

#include<stdio.h>
int main()
{
    int num, i, reversed=0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(i=num;i!=0;i/=10)
    {
     remainder = i % 10;  
     reversed = reversed * 10 + remainder;
    }

    if(reversed == num)
    {
        printf("\nThe given number %d is a Palindrome.", num);
    }
    else
    {
        printf("\nThe given number %d is NOT a Palindrome.", num);
    }
    return 0;
}