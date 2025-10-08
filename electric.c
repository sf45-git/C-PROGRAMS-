/***************************************************************************
 
 WAPC to input the number of units of electricity consumed by a consumer. 
 Calculate and print the electricity bill based on the following criteria:
 First 100 units: Rs. 2 per unit
 Next 200 units: Rs. 3 per unit
 Above 300 units: Rs. 4 per unit
 A surcharge of 2.5% is levied on the bill if the number of units consumed exceeds 300 units
  
 ***************************************************************************/


 #include<stdio.h>
 int main()
 {
    unsigned int unit;
    float bill;
    printf("ENTER THE NUMBER OF UNITS OF ELECTRICITY CONSUMED: ");
    scanf("%u", &unit);

    if(unit<=100)
    {
        bill = (float) 2 * unit;
    }
    else if(unit>100 && unit<=300)
    {
        bill = (float) 3 * unit;
    }
    else 
    {
        bill = (float) 4 * unit;
        bill= bill + (0.025 * bill);
    }

    printf("\nTHE BILL FOR %u UNITS CONSUMED IS: %.2f",unit,bill);
    return 0;
 }