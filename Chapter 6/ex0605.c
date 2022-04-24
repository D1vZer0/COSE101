#include <stdio.h>

int main()
{
    int n, temp, f, s, i;
    scanf ("%d", &n);
    scanf ("%d %d", &f, &s);
    
    if (s > f) {
        temp = f;
        f = s;
        s = temp;
    }
    
    for (i=0; i<n-2; i++) {
        scanf ("%d", &temp);
        if (temp > f) {
            f = temp;
        }
        else if (temp > s) {
            s = temp;
        }
    }
    
    printf ("%d %d", f, s);
    
    return 0;
}
