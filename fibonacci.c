/*****************************************************************
  
  WAPC to  display the following series: 1, 1, 2, 3, 5, 8, ... to n''-terms.
  (This is the fibonacci series) Here, 'n' is the user input.
  
*******************************************************************/


#include<stdio.h>
int main()
{
    int first, final=1, next=0, i, num;
    printf("\nEnter the limit 'n': ");
    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        printf("%d\t", next);
        first = next;
        next = next + final;
        final = first;
    }
    return 0;
}