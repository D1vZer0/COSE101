#include <stdio.h>

int main ()
{
    int n[100], i=0, j=0, flag=1, sum=0;
    
    while (flag) {
        scanf ("%d", &n[i]);
        
        for (j=0; j<i; j++) { //flip the flag if repeated integer detected
            if (n[i] == n[j]) { 
                flag = 0;
            }
        }
        if (flag) { //if not detected, add the input
            sum += n[i];
        }
        i++;
    }
    printf ("%d", sum);
    
    return 0;
}
