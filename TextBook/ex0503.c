#include <stdio.h>

int main()
{
    int n, s=0, i;
    for (i=0; i<5; i++) {
        scanf ("%d", &n);
        if (n>0) {
            s += n;
        }
    }
    printf ("%d", s);
    
    return 0;
}
