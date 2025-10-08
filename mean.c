/*****************************************************
  
 WAPC to input 5 integers and find their mean. 
  
 *****************************************************/


 #include<stdio.h>
 int main()
 {
    int num1,num2,num3,num4,num5,sum;
    float mean;
    printf("\nENTER 5 INTEGERS:\n ");
    scanf("%d %d %d %d %d" ,&num1, &num2, &num3, &num4, &num5);

    sum= num1 + num2 + num3 + num4 + num5;
    mean= (float) sum/5;

    printf("\nTHE MEAN IS: %.2f", mean);
    return 0;
 }