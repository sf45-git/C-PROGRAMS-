 /*************************************************************************************
   
  WAPC to input a 4-digit number and find the sum and product of the rightmost and leftmost digits.
  
**************************************************************************************/


#include<stdio.h>
int main()
{
    int num,left,right,sum=0,pro;
    printf("\nENTER A 4-DIGITS NUMBER: ");
    scanf("%d",&num);
    
    left= num/1000;
    right= num%10;

    sum= left + right;
    pro= left * right;

    printf("\nTHE SUM OF LEFTMOST AND RIGHTMOST DIGITS IS: %d", sum);
    printf("\nTHE PRODUCT OF LEFTMOST AND RIGHTMOST DIGITS IS: %d", pro);
    return 0;
}