/************************************************************************

WAPC to input two sorted integer arrays from the user. 
Merge these two arrays into a single sorted array.

*************************************************************************/


#include<stdio.h>
int main()
{
    int n, m, i, j, k=0;
    printf("\nEnter the number of elements in the first array: ");
    scanf("%d", &n);

    printf("\nEnter the number of elements in the second array: ");
    scanf("%d", &m);

    int arr1[n], arr2[m], arrM[n+m];

    printf("\nEnter the elements of the first array:");
    for(i=0; i<n; i++)
    {
        printf("\nElement %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the elements of the second array:");
    for(j=0; j<m; j++)
    {
        printf("\nElement %d: ", j);
        scanf("%d", &arr2[j]);
    }

    printf("\nThe elements of the first array are: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nThe elements of the second array are: ");
    for(j=0; j<m; j++)
    {
        printf("%d ", arr2[j]);
    }

    i=0;
    j=0;
    
    // Merge arr1 and arr2 into a sorted array
    while(i < n && j < m )
    {
        if(arr1[i] <= arr2[j])
        {
            arrM[k++] = arr1[i++];
        }
        else
        {
            arrM[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < n) 
    {
        arrM[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < m) 
    {
        arrM[k++] = arr2[j++];
    }

    // Print the merged array
    printf("\n\nThe merged array is: ");
    for(k=0; k<n+m; k++)
    {
        printf("%d ", arrM[k]);
    }

    return 0;
}