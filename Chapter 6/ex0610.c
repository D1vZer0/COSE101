#include <stdio.h>

int main()
{
    int n, i, j, m=1;
    scanf ("%d", &n);
    
    for (i=0; i<n; i++) {
        for (j=0; j<=i; j++) {
            printf ("%d ", m++);
        }
        printf ("\n");
    }
    
    return 0;
}
