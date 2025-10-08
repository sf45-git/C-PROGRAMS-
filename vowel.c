/*********************************************************************
  
WAPC to a character in lowercase. 
Check and print if the character is a vowel or consonant.
  
***********************************************************************/


#include<stdio.h>
int main()
{
    char C;
    printf("\nENTER A lowercase CHARACTER: ");
    scanf("%c",&C);
    
    if(C>=97 && C<=122)
    {
       if(C=='a' || C=='e' || C=='i' || C=='o' || C=='u')
       {
           printf("\n%c IS A VOWEL.",C);
       }
       else
       {
           printf("\n%c IS A CONSONANT.",C);
       } 
    }
    else
    {
        printf("\n%c IS NOT A lowercase CHARACTER.",C);
    }
    return 0;
}