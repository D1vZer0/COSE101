#include <stdio.h>

int main()
{
    int n, i, j, s;
    scanf ("%d", &n);
    s = 2*n - 1;
    
    for (i=0; i<n; i++) {
        for (j=0; j<i; j++) {
            printf (" ");
        }
        for (j=0; j<s; j++) {
            printf ("*");
        }
        printf ("\n");
        s -= 2;
    }
    
    return 0;
}
