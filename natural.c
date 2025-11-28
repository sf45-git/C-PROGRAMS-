/*************************************************************************

 WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
 
**************************************************************************/


#include<stdio.h>
int main ()
{
    int n, i;
    printf("Enter the limit 'n': ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        printf("%d\t",i);
    }
    return 0;
}