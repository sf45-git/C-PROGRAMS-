/******************************************************************************

WAPC to do the following:
1. Initialize an integer array of 5 elements
2. Accept an integer from the user
3. Display whether or not the element entered by the user is present in the array
Assume all elements in the array are unique

*******************************************************************************/



#include<stdio.h>
int main()
{
    int arr[5], i, search, flag, position;
    
    for(i=0; i<5; i++)
    {
        printf("\nElement %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the search element: ");
    scanf("%d", &search);

    for(i=0; i<5; i++)
    {
        if(search == arr[i])
        {
            flag = 1;
            position = i;
        }
    }

    if(flag == 1)
    {
        printf("\n%d is Element %d in the array.", search, position);
    }
    else
    {
        printf("\n%d is NOT present in the array.", search);
    }
    return 0;
}