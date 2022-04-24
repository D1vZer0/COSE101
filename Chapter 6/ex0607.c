#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf ("%d %d", &n, &m);
    
    for (i=1; i<=9; i++) {
        for (j=n; j<=m; j++) {
            printf ("%dX%d=%2d ", j, i, j*i);
        }
        printf ("\n");
    }
    
    return 0;
}
