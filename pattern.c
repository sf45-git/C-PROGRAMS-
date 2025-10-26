/****************************************************************
 
 WAPC to print the following pattern -

                   1
                2     3
              4    5    6
            7   8     9    10
        11    12   13   14    15

*****************************************************************/       


#include<stdio.h>
int main()
{
    int n, a, i, j, k=1;
    printf("\nEnter the number of lines: ");
    scanf("%d", &n);

    a=n;
    int b=n;

    for(i=1; i<=n; i++)
    {
        for (j=1; j<=b; j++)
        {
            if(j%a == 0 || j == b)
            {
                printf("%d", k++);
            }
            else 
            {
                printf("A");
            }
        }

        printf("\n");
        a--;
        b++;
    }
    return 0;
}
                  

