/********************************************************************************
 
WAPC to print the followimg pattern:  

1
2   3
4   5   6
7   8   9   10     ...to 'n' terms.

(This is the Floyd's Triangle). Here, 'n' is the user input.
 
***********************************************************************************/



#include<stdio.h>
int main()
{
    int num, i, j, k=1;
    printf("Enter the limit 'n': ");
    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%d\t", k++);
        }
        printf("\n");
    }
    return 0;
}