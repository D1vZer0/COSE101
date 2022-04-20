#include <stdio.h>

int main()
{
    int n, i, j, k, m=1;
    scanf ("%d", &n);
   
    k=n-1;
    for (i=0; i<n; i++) { //upper triangle 
        for (j=0; j<k; j++) {
            printf (" ");
        }
        for (m=n-k; m>0; m--) {
            printf ("%d", m);
        }
        if (n-k != 1) {
            for (m=2; m<=n-k; m++) {
                printf ("%d", m);
            }
        }
        printf ("\n");
        k--;
    }
    
    k=1;
    for (i=0; i<n-1; i++) { //lower triangle
        for (j=0; j<k; j++) {
            printf (" ");
        }
        for (m=n-k; m>0; m--) {
            printf ("%d", m);
        }
        if (n-k != 1) {
            for (m=2; m<=n-k; m++) {
                printf ("%d", m);
            }
        }
        printf ("\n");
        k++;
    }
    
    return 0;
}
