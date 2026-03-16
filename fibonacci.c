/*****************************************************************
  
WAPC to  display the following series: 

1, 1, 2, 3, 5, 8, ... to n''-terms.

(This is the Fibonacci series) Here, 'n' is the user input.
  
*******************************************************************/


#include<stdio.h>

int prime(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return -1;
        }
    }
    return n;
} 

int fact(int n)
{
    int i,result;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            result=prime(i);
        
        if(result!=-1)
        {
            printf("%d ",result);
        }
    }
    }
    return 0;
}


int main()
{
    int num;
    printf("Enter a number>=2: ");
    scanf("%d",&num);
    if(num<=1)
    {
        printf("Invalid Input.");
        return 0;
    }

    printf("The prime factors of %d are: ",num);
    fact(num);
    return 0;
}