/*************************************************************************

 WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
 
**************************************************************************/


#include<stdio.h>
int main ()
{
    int num, i;
    printf("Enter the limit: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        printf("%d\t",i);
    }
    return 0;
}