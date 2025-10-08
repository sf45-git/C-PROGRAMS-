/***********************************************************************
  
  WAPC to input the temperature in Celsius and output it in Fahrenheit.
  
 ************************************************************************/


#include<stdio.h>

int main()
{
    float cel,far;
    printf("\nENTER THE TEMPERATUREIN CELSIUS: ");
    scanf("%f",&cel);

    far=(cel*1.8)+32;
    printf("\n THE TEMPERATURE IN FAHRENHEIT IS: %.2f",far);

    return 0;
}