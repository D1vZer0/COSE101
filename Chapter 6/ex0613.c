#include <stdio.h>

int main ()
{
    int n, i, count=0, flag=0;
    scanf ("%d", &n);
    
    for (i=2; n!=1; i++) {
        while (n%i == 0) {
            flag = 1;
            count++;
            n /= i;
        }
        if (flag) {
            printf ("%d %d\n", i, count);
            flag = 0;
            count = 0;
        }
    }
    
    
    return 0;
}
