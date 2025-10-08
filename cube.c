/*****************************************************************
  
 WAPC to input an integer. Calculate and display the square and cube of the number. 
  
 ******************************************************************/


 #include<stdio.h>
 int main()
 {
    int n, square, cube;
    printf("\nENTER A NUMBER: ");
    scanf("%d",&n);

    square=n*n;
    cube=n*n*n;

    printf("\nTHE SQUARE OF %d IS: %d",n,square);
    printf("\nTHE CUBE OF %d IS: %d",n,cube);
    
    return 0;
 }