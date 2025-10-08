/*******************************************************************
  
 WAPC to find the gender ratio based on the number of males and number of females entered as inputs. 
  
 *********************************************************************/


 #include<stdio.h>
 int main()
 {
    int no0fmales,no0ffemales;
    float ratio;

    printf("\nENTER THE NUMBER OF MALES: ");
    scanf("%d",&no0fmales);
    printf("\nENTER THE NUMBER OF FEMALES: ");
    scanf("%d",&no0ffemales);

    ratio= (float) no0ffemales/no0fmales*1000;

    printf("\nTHE GENDER RATIO (number of females per 1,000 males) IS: %.2f",ratio);
    return 0;

 }