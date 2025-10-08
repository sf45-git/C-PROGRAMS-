/***************************************************************************
  
 WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms. 
 Here, ‘n’ is user input.
  
*****************************************************************************/


#include<stdio.h>
int main()
{
    int n, i, j=1;
    printf("Enter the limit 'n': ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("%d\t", j);
        j += j;
    }
    return 0;
}