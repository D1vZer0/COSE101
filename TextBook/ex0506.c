#include <stdio.h>

int main()
{
    int b, s, temp, n;
    scanf ("%d %d", &b, &s);
    if (b < s) {
        b = temp;
        b = s;
        s = temp;
    }
    scanf ("%d", &n);
    
    if (n < s) {
        s = n;
    }
    else if (n > b) {
        b = n;
    }
    printf ("%d %d", b, s); 
    
    return 0;
}
