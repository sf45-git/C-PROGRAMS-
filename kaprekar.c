/**************************************************************

WAPC to input a positive integer. 
Check whether it is Kaprekar or not. 

Note: Kaprekar Number – A number whose square can be split 
into two parts that add up to the number itself. 
Example: 45² = 2025 → 20 + 25 = 45

***************************************************************/



#include<stdio.h>
int main()
{
    int num, square, i, count=0, first=0, last, first2=0, last2, first1, first3, rem, power=1;
    printf("\nEnter a positive integer: ");
    scanf("%d", &num);

    square = num * num;
    first1 = square;
    first3 = square;
    last = square ;
    last2 = square;

    printf("square= %d",square);

    for(i=square; i>0; i/=10)
    {
        count++;
    }
    printf("\nCount= %d", count);

    for(i=0; i<count/2; i++)
    {
        power *= 10;
    }
    printf("\npower:%d",power);

    if(count%2==0)
    {
        for(i=1; i<power/2; i*=10)
        {
            rem = first1 % 10;
            first = first + rem*i;
            first1 /= 10;   
            printf("\n%d\n", first);
        }
        for(i=count/2; i>0; i--)
        {
            last = last / 10;
        }
        printf("\nfirst: %d  and last: %d", first, last);
    }
    

    else 
    {
        for(i=1; i<power; i*=10)
        {
            rem = first1 % 10;
            first = first + rem*i;
            first1 /= 10;   
            printf("\n%d\n", first);
        }
        for(i=count/2  ; i>0; i--)
        {
            last = last / 10;
        }
    
        printf("\nfirst: %d  and last: %d", first, last);
        for(i=1; i<power + 1; i*=10)
        {
            rem = first3 % 10;
            first2 = first2 + rem*i;
            first3 /= 10;   
            printf("\n%d\n", first2);
        }
        for(i=count/2 + 1; i>0; i--)
        {
            last2 = last2 / 10;
        }
        printf("\nfirst2: %d  and last2: %d", first2, last2);
    }

    if(first + last == num || first2 + last2 == num)
    {
        printf("\n%d is a Kaprekar Number.",num);
    }
    else
    {
        printf("\n%d is NOT a Kaprekar Number.",num);
    }
    return 0;
}