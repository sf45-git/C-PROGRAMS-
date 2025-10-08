/*********************************************************************

WAPC to initialize the array with 10 integers of your choice. 
Input an integer from the user. 
Check and display whether or not the input entered by the user is present in the array or not. 
Use the binary search technique (Hint: Make sure the array elements are sorted).

************************************************************************/



#include<stdio.h>
int main()
{
    int i, search, mid, left, right, flag=0;
    int arr[]={12,23,34,45,67,78,89,90,100,123};

    printf("\nEnter the search element: ");
    scanf("%d", &search);

    left = 0;
    right = 9;
    
    while(left <= right)
    {
        mid = left + (right - left) / 2;

        if(arr[mid] == search)
        {
            flag = 1;
            break;
        }
        else if(arr[mid] > search)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    
    if(flag == 1)
    {
        printf("\nThe search element %d is present at index %d in the array.", search, mid);
    }
    else
    {
        printf("\nThe search element %d is NOT present in the array.", search);
    }

    return 0;
}