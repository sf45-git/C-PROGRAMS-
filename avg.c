/********************************************************************
  
 * WAPC to input five integers from the user. Calculate and print the average.
  
 *********************************************************************/


#include<stdio.h>

int main()
{
    int num1,num2,num3,num4,num5,sum,avg;
    printf("\nENTER 5 INTEGERS: ");
    scanf("%d %d %d %d %d" ,&num1, &num2, &num3, &num4, &num5);

    sum= num1 + num2 + num3 + num4 + num5;
    avg= sum/5;

    printf("\nTHE AVERAGE IS: %d", avg);
    return 0;
}