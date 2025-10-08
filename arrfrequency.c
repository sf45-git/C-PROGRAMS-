/***********************************************************

WAPC to input an integer array from the user. 
Display the frequency of every element in the array.

************************************************************/



#include<stdio.h>
int main()
{
    int n, i, j, k, count;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[n], viewed_element[n];

    for(i=0; i<n; i++)
    {
        printf("\nElement %d: ", i);
        scanf("%d", &arr[i]);
        viewed_element[i]=0;
    }

    // Check frequency of each element
    for(i=0; i<n; i++)
    {
        if(viewed_element[i] == 0)
        {
            count = 1;

            for(j=i+1; j<n; j++)
            {
                if(arr[i] == arr[j])
                {
                    count ++;
                    viewed_element[j] = 1;
                }
            }
             printf("\n%d occurs %d times.", arr[i], count);
        }
    }

    return 0;
}
