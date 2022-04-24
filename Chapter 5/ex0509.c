#include <stdio.h>

int main()
{
    int y1, y2, m1, m2, d1, d2, t1, t2;
    scanf ("%d/%d/%d", &y1, &m1, &d1);
    scanf ("%d/%d/%d", &y2, &m2, &d2);
    t1 = y1*10000 + m1*100 + d1;
    t2 = y2*10000 + m2*100 + d2;
    
    if (t1<t2) {
        printf ("%04d/%02d/%02d", y1, m1, d1);
    }
    else {
        printf ("%04d/%02d/%02d", y2, m2, d2);
        if (t1 == t2) {
            printf ("*");
        }
    }
    
    return 0;
}
