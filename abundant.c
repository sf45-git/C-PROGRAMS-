/*************************************************************
 
 WAPC to input a positive integer.
 Check whether the number is abundant or not.
 
 Abundant Number – A number for which the sum of proper divisors 
 is greater than the number. 
 Example: 12 → 1+2+3+4+6=16 > 12
 
 ***************************************************************/


 #include<stdio.h>
int main()
{
    int num, i, sum=0;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    for(i=1; i<num; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }

    printf("\nThe sum of proper divisors of %d is: %d", num, sum);

    if(sum > num)
    {
        printf("\n%d is an Abundant Number.", num);
    }
    else
    {
        printf("\n%d is NOT an Abundant Number.", num);
    }
    return 0;
}