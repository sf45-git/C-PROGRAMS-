/************************************************************************
  
WAPC to do the following:
 Input: age, citizenship status (Y/N), criminal record (Y/N).
 Eligible if: age ≥ 18 and citizenship = Y and no criminal record.
 If age ≥ 60, print "Senior Citizen Eligible".
 If not eligible, specify why.
 
*************************************************************************/



#include<stdio.h>
int main()
{
    int age;
    char status, criminal_record;

    printf("ENTER AGE: ");
    scanf("%d",&age);
    printf("CITIZENSHIP STATUS (Y for Yes and N for No): ");
    scanf(" %c", &status);
    printf("CRIMINAL RECORD (Y for Yes and N for No): ");
    scanf(" %c", &criminal_record);

    if(age<18)
    {
        printf("\nNot Eligible, age is less than 18.");
    }
    else if(status != 'Y' )
    {
        printf("\nNot Eligible, Not a Citizen.");
    }
    else if(criminal_record != 'N')
    {
        printf("\nNot Eligible, Has a Criminal Record.");
    }
    else if(age>=60 && status == 'Y' && criminal_record == 'N')
    {
        printf("\nSenior Citizen Eligible.");
    }
    else
    {
        printf("\nELIGIBLE.");
    }
    return 0;    
}