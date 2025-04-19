#include <stdio.h>

double power(int x, int n)
{
    double power = 1;
    if(n==0)
    {
        return 1;
    }

    while(n>=1)
    {
       power = power*x;
       n--;
    }
    while(n<=-1)
    {
        power = power/x;
        n++;
    }
    return power;
    
}