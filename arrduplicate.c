/**********************************************************
 
WAPC to input an integer array from the user. 
Remove all duplicates and display the resultant array.

************************************************************/



#include<stdio.h>
int main()
{
    int n, i, j, k;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++)
    {
        printf("\nElement %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Remove duplicate elements
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k<n-1; k++)
                {
                    // Shift the elements after removing the duplicate element
                    arr[k] = arr[k+1];
                }

                n--;
                j--;
            }
        }
    }

    printf("\nThe array after removing the duplicate elements: ");

    for(k=0; k<n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}