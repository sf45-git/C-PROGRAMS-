/*****************************************************
  
 WAPC to input a character. Print its ASCII value. 
 
 ***************************************************/


#include<stdio.h>
int main()
{
    char N;
    printf("\nENTER A CHARACTER: ");
    scanf("%c",&N);

    printf("\nTHE ASCII VALUE OF %c IS %d",N,N);
    return 0;
}