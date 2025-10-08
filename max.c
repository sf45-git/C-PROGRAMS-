/***********************************************************
  
 WAPC to input three unique integers. Find the maximum value.
  
 ************************************************************/


 #include<stdio.h>
 int main()
 {
    int num1,num2,num3,max;
    printf("\nENTER 3 INTEGERS:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    max=num1;

    if(num2>max)
    {
        max=num2;
    }
    if(num3>max)
    {
        max=num3;
    }
    
    printf("\nTHE MAXIMUM VALUE IS: %d",max);
    return 0;
 }