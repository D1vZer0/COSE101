#include <stdio.h>

int main ()
{
    int n[100], i, j, flag=0, sum=0;
    for (i=0; i<100; i++) {
        scanf ("%d", &n[i]);
        for (j=0; j<i; j++) {
            if (n[i] == n[j]) {
                flag=1;
            }
        }
        if (flag) {
            break;
        }
        sum += n[i];
    }
    printf ("%d", sum);
    
    return 0;
}
