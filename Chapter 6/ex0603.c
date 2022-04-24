#include <stdio.h>

int main()
{
    int n, m, d=0, o=0, i, temp;
    scanf ("%d", &n);
    
    for (m=n; m!=0; m/=10) {
        d++;
    }
    m = n;
    for (i=0; i<d; i++) {
        o *= 10;
        temp = m%10;
        o += temp;
        m/=10;
    }
    
    printf ("%d", o);
    
    return 0;
}
