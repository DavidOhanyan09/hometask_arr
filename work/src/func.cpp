#include <stdio.h>

int max(int arr[], int size)
{
    int max = 0;
    max = arr[0];
    if(size>1)
    {
        for(int i = 1 ; i<size ; i++)
        {
            if(max<=arr[i])
            {
                max = arr[i];
            }
        }
    }
    return max;
}