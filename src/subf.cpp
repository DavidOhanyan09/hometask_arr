#include <stdio.h>

bool subarray(int arr1[], int size1, int arr2[], int size2)
{
    if(size2==0)
        return true;
    if(size2>size1)
        return false;
    
    for(int i = 0; i < size1-size2; i++)
    {
        int j = 0;
        for(; j<size2; j++)
        {
            if(arr1[i] != arr2[j])
            {
                break;
            }
        }
        if(size2-1==j)
            return true;
    }
    return false;
    
}