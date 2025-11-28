/********************************************************************

WAPC to input an integer array from the user. 
Sort the array in ascending order using selection sort technique.

***********************************************************************/




#include<stdio.h>
int main()
{
    int n, i, j, min_index, temp;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        printf("\nElement %d: ",i);
        scanf("%d", &arr[i]);
    }

    //Print the original array
     printf("\nThe original array is: ");
    
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    //Sorting the array
    for(i=0; i<n; i++)
    {
        min_index = i;

        for(j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    //Print the sorted array
    printf("\nThe sorted array is: ");

    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}