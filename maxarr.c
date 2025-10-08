/******************************************************************************

WAPC to do the following:
1. Declare an integer array of 'n' elements
2. Accept integers from the user and store them in the array
3. Find the maximum element in the array

*******************************************************************************/


#include<stdio.h>
int main()
{
    int n, i, max, position;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        printf("\nElement %d: ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    printf("\nThe elements in the array are: ");

    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
        if(arr[i] > max)
        {
            max = arr[i];
            position = i;
        }
    }

    printf("\nThe maximum element in the array is Element %d : %d", position, max);
    return 0;

}