#include <stdio.h>

int main()
{
    int n, i, j, m;
    scanf ("%d", &n);
    
    for (i=1; i<=n; i++) {
        for (j=0; j<n; j++) {
            m = i+j;
            if (m > n) {
                m -= n;
            }
            printf ("%d", m);
        }
        printf ("\n");
    }
    
    return 0;
}
