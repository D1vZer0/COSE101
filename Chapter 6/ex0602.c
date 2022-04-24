#include <stdio.h>

int main()
{
    int temp, low, hi, sum=0;
    scanf ("%d", &temp);
    low = temp;
    hi = temp;
    
    while (temp != 0) {
        if (temp < low) {
            low = temp;
        }
        if (temp > hi) {
            hi = temp;
        }
        sum += temp;
        
        scanf ("%d", &temp);
    }
    
    printf ("%d %d %d", sum, low, hi);
    
    return 0;
}
