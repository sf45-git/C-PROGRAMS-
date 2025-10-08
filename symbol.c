/***********************************************************************
 
WAPC to input a character. Categorize it as either uppercase letter, 
lowercase letter, number or any other miscellaneous symbol. 
  
************************************************************************/


#include<stdio.h>
int main()
{
    char N;
    int asciiValue;
    printf("\nENTER A CHARACTER: ");
    scanf("%c",&N);

    asciiValue=N;

    if(asciiValue >= 65 && asciiValue <= 90)
    {
        printf("\n%c is an uppercase letter",N);
    }
    else if(asciiValue >= 97 && asciiValue <= 122)
    {
        printf("\n%c is a lowercase letter",N);
    }
    else if(asciiValue >= 48 && asciiValue <= 57)
    {
        printf("\n%c is a digit",N);
    }
    else
    {
        printf("\n%c is a miscellaneous symbol",N);
    }
    return 0;

}