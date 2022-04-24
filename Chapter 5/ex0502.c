#include <stdio.h>

int main()
{
    int n, m;
    scanf ("%d %d", &n, &m);
    if (n*n == m) {
        printf ("%d*%d=%d", n, n, m);
    }
    else if (m*m == n) {
        printf ("%d*%d=%d", m, m, n);
    }
    else {
        printf ("none");
    }

    return 0;
}
