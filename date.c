/********************************************************************************************

WAPC to do the following:
Input: day, month, year.
Check the following:
Month between 1 and 12.
Correct days in month (30 vs 31 days).
February: 28 days normally, 29 days if leap year.
Output: "Valid date" or "Invalid date"

***********************************************************************************************/



#include<stdio.h>
int main()
{
    int day, month, year, flag=0, leap_year=0;
   printf("ENTER DAY: ");
   scanf("%d", &day);
   printf("ENTER MONTH: ");
   scanf("%d", &month);
   printf("ENTER YEAR: ");
   scanf("%d", &year);

    //Check for month

    if(month>=1 && month<=12)
    {
        flag=1;
    }
    else 
    {
        flag=0;
    }

    //Check for leap year

    if(year % 100 != 0 && year % 4 == 0)
    {
        leap_year=1;
    }
    else if(year % 400 == 0)
    {
        leap_year=1;
    }

    //Check for day

    if(day>=1 && day<=30 )
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    
    //Check for feb 29
    
    if(month==2)
    {
      if(day>28)
      {
        if(day==29 && leap_year==1)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
      }
    }

    //Check for 31st

    if(day==31)
    {
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }

    //Check for validity

    if(flag==1)
    {
        printf("\nValid Date.");
    }
    else
    {
        printf("\nInvalid Date.");
    }

    return 0;
}