/*********************************************************************
 
 WAPC to check if a number is of 3-digits and divisible by 3. 
  
***********************************************************************/


#include<stdio.h>
int main()
{
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

    if(num>=100 && num<=999)
    {
        if(num%3==0)
        {
            printf("\n%d IS A 3-DIGIT NUMBER AND DIVISIBLE BY 3.",num);
        }
        else
        {
            printf("\n%d IS A 3-DIGIT NUMBER BUT NOT DIVISIBLE BY 3.",num);
        }
    }
    else
    {
        printf("\n%d IS NOT A 3-DIGIT NUMBER.",num);
    }
    return 0;
}