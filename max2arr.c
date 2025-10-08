/******************************************************************

WAPC to input an array of ‘n’ elements from the user.
Find and display the second highest element of the array.

*********************************************************************/


#include<stdio.h>
int main()
{
    int n, max, second_high, i=0, position, second_position;
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

    second_high = arr[0];

    if(max == arr[0])
    {
        second_high = arr[1];
    }
    

    for(i=0; i<n; i++)
    {
        
            if(arr[i] > second_high && arr[i] != max)
            {
                second_high = arr[i];
                second_position = i;
                
            }
          
        
    }

    printf("\nThe second highest element in the array is Element %d : %d", second_position, second_high);
    return 0;
}