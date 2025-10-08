/*****************************************************
 
 WAPC to find the simple interest based on user inputs. 
 
*******************************************************/


#include<stdio.h>
int main()
{
    float p, rate, interest;
    int time;
    printf("ENTER PRINCIPAL VALUE: ");
    scanf("%f",&p);
    printf("ENTER RATE (in percentage): ");
    scanf("%f",&rate);
    printf("ENTER TIME (in years): ");
    scanf("%d",&time);

    interest=(float) (p*rate*time)/100;

    printf("\nTHE SIMPLE INTEREST IS: %.2f", interest);
    return 0;
}