/*************************************************
WAP to print the following patterns (with 'n' lines) according to the user's choice:

1.      *              (Note: 'n' has to odd for this pattern.)
      * * *
    * * * * *  
      * * * 
        * 
        
2.      *
      * *
    * * *   
  * * * *     
* * * * *

**************************************************/


#include<stdio.h>

void pattern_1(int num)
{
    int i,j,k,l;

    if(num%2!=0)
    {
    l=num/2;
    for(i=1;i<=num/2+1;i++)
    {
        for(k=0;k<l;k++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        l--;
        printf("\n");
    }
    
    l=1;
    for(i=num/2;i>0;i--)
    {
        for(k=1;k<=l;k++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
        l++;
    }
    }
    else{
        printf("Number of lines has to be odd for this pattern.");
    }
}

void pattern_2(int num)
{
    int i,j,k;

    for(i=1;i<=num;i++)
    {
        for(k=1;k<=num-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}

int main()
{
    int n,choice;
    printf("Enter the number of lines: ");
    scanf("%d",&n);

    printf("Choose a pattern (1/2): ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        pattern_1(n);
        break;

        case 2: 
        pattern_2(n);
        break;

        default:
        printf("Invalid Choice.");
    }
    return 0;
}

