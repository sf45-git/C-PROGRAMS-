/******************************************************************************
  
 WAPC to display 
  The sum of the first ‘n’ odd numbers. 
  The sum of the first ‘n’ even numbers separately.
 Here, 'n' is user input.
  
*********************************************************************************/



#include<stdio.h>
int main()
{
    int n, i, sum0fodd=0, sum0feven=0;
    printf("Enter the limit 'n': ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum0feven += i;
        }
        else
        {
            sum0fodd += i;
        }
    }

    printf("\nThe sum of of the first %d even numbers is: %d", n, sum0feven);
    printf("\nThe sum of of the first %d odd numbers is: %d", n, sum0fodd);
    return 0;
}