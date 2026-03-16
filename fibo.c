#include<stdio.h>

int main()
{
    int i,j,k,n;
    printf("Enter: ");
    scanf("%d",&n);

    for(i=0;i<n/2;i++)
    {
        for(j=n/2;j>i;j--)
        {
            printf("  ");
        }
        for(k=0;k<2*i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=n-1;i>n/2;i--)
    {
        for(j=n;j>i;j--)
        {
            printf("  ");
        }
        for(k=0;k<2*i-5;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}