/******************************************************************************

WAPC to do the following:
1. Declare an integer array of 5 elements
2. Fill the array with user inputs
3. Display the original array
4. Reverse the array
5. Display the reversed array

*******************************************************************************/


#include<stdio.h>
int main()
{
    int arr[5], i, left, right;
    
    for(i=0; i<5; i++)
    {
        printf("\nElement %d: ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements in the array are:\t");

    for(i=0; i<5; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\nThe elements in the array in REVERSE ORDER are: \t");

    for(i=4; i>=0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}