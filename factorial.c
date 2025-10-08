/**********************************************************************
 
 WAPC to input a positive integer from the user. Find and display the factorial of the number. 
  
***********************************************************************/


#include<stdio.h>
int main()
{
    int num,i,fact=1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num>0)
    {
        for(i=num;i>=1;i--)
        {
            fact = fact * i ;
        }
        printf("\nThe factorial of %d is: %d", num, fact);
    }
    else
    {
        printf("\nInvalid Value.");
    }
    return 0;
}