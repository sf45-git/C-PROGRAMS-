/********************************************************************
 
  WAPC to input two numbers and swap them without using a third variable.

 ***********************************************************************/


#include<stdio.h>
int main()
{
    int num1, num2;

    printf("ENTER THE FIRST INTEGER: ");
    scanf("%d", &num1);
    printf("\nENTER THE SECOND INTEGER: ");
    scanf("%d", &num2);

    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    
     printf("\nAFTER SWAPPING: \n FIRST INTEGER = %d \n SECOND INTEGER= %d",num1,num2);
    return 0;
    


}