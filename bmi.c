/*********************************************************************************

WAPC to do the following:
 Input: height (m), weight (kg).
 Calculate BMI = weight / (height²).
   Classify:
    BMI < 18.5 → Underweight
    18.5 ≤ BMI < 25 → Normal
    25 ≤ BMI < 30 → Overweight
    ≥ 30 → Obese
 If overweight or obese and age > 40 → print "Consult doctor".
  
***********************************************************************************/



#include<stdio.h>
int main()
{
    float height, weight, bmi;
    int age;
    printf("ENTER AGE, HEIGHT AND WEIGHT:\n");
    scanf(" %d %f %f", &age, &height, &weight);
    
    bmi = weight / (height * height);
    printf("%.2f",bmi);

    if(bmi<18.5)
    {
        printf("\nUnderweight.");
    }
    else if(bmi>=18.5 && bmi<25)
    {
        printf("\nNormal.");
    }
    else if(bmi>=25 && bmi<30)
    {
        printf("\nOverweight.");
    }
    else if(bmi>=30)
    {
        printf("\nObese.");
    }
    
    if(age>40 && bmi>=25)
    {
        printf("\nConsult Doctor.");
    }
    return 0;
}