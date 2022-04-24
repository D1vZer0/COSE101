#include <stdio.h>

int main()
{
    int a, b, c, m, i;
    scanf ("%d %d %d", &a, &b, &c);
    m = a;
    if (b > m) {
        if (c > b) {
            m = c;
        }
        else {
            m = b;
        }
    }
    
    for (i=5; i>0; i--) { //배열을 못 쓴다는게 슬프네요
        if (a == i) {
            printf ("*");
            a--;
        }
        else {
            printf (" ");
        }
        
        if (b == i) {
            printf ("*");
            b--;
        }
        else {
            printf (" ");
        }
        
        if (c == i) {
            printf ("*");
            c--;
        }
        else {
            printf (" ");
        }
        
        printf ("\n");
    }
    
    
    return 0;
}
