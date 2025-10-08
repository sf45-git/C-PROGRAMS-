/************************************************************************ 
WAPC to accept the weight of a parcel in kilograms and 
calculate the rate per kilogram based on the following criteria:

Weight in kilograms   Rate per kilogram
First 5 kilograms     Rs. 800
Next 5 kilograms      Rs. 700
Above 10 kilograms    Rs. 500

Also input the type of the courier (‘I’ for International and ‘D’ for Domestic).
If the type of the courier is International, an additional amount of Rs. 1500 is levied.
*************************************************************************/



#include<stdio.h>
int main()
{
    float weight,rate;
    char type;
    printf("ENTER THE WEIGHT OF A PARCEL (in Kg): ");
    scanf("%f",&weight);
    printf("\n ENTER THE TYPE OF COURIER (I for International and D for Domestic): ");
    scanf(" %c",&type);

    if(weight<=5)
    {
        rate = 800 * weight;
    }
    else if(weight>=5 && weight<=10)
    {
        rate = 700 * weight;
    }
    else
    {
        rate = 500 * weight;
    }

    if(type=='I')
    {
        rate = rate + 1500;
    }

    printf("THE RATE OF %.2fKg PARCEL OF COURIER TYPE %c IS: %.2f",weight,type,rate);
    return 0;
}