/********************************************************************
 
 WAPC to input two integers and display the contents after swapping.

 ***********************************************************************/


#include<stdio.h>
int main()
{
    int num1, num2, temp;
    printf("ENTER THE FIRST INTEGER: ");
    scanf("%d", &num1);
    printf("\nENTER THE SECOND INTEGER: ");
    scanf("%d", &num2);

    temp=num1;
    num1=num2; 
    num2=temp;

    printf("\nAFTER SWAPPING: \n FIRST INTEGER = %d \n SECOND INTEGER= %d",num1,num2);
    return 0;
}
