/*********************************************************

With the help of 4 user-defined functions, design a basic calculator 
capable of addition, subtraction, multiplication and division.

**********************************************************/


#include<stdio.h>

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int sub(int a, int b)
{
    int difference = a - b;
    return difference;
}

int pro(int a, int b)
{
    int product = a * b;
    return product;
}

double div(int a, int b)
{
   double division =  a / b;
    return division;
}

int main()
{
    int num1, num2;
    char opr;
    printf("\nEnter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    printf("\nEnter the operation: ");
    scanf(" %c", &opr);


    if(opr == '+')
    {
        printf("\nThe sum of %d and %d is %d", num1, num2, add(num1, num2));
    }
    else if(opr == '-')
    {
        printf("\nThe difference between %d and %d is %d", num1, num2, sub(num1, num2));
    }
    else if(opr == '*')
    {
        printf("\nThe product of %d and %d is %d", num1, num2, pro(num1, num2));
    }
    else if(opr == '/')
    {
        printf("\nThe division of %d and %d is %.2f", num1, num2, div(num1, num2));
    }
    else
    {
        printf("\nINVALID OPERATION.");
    }
    return 0;
}