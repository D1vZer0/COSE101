//NOT FINALIZED YET

#include <stdio.h>

int main ()
{
    int i, j, n[10][2], m, flag=1;

    for (i=0; i<10; i++) { //array reset
        n[i][0] = 0;
    }
    for (i=0; i<10; i++) {
        scanf ("%d", &m);

        for (j=0; j<i; j++)
        {
            if (m == n[j][0]) { //if the number already appeared
                n[j][1]++;
                flag = 0;
            }
        }
        if (flag) { //if not appeared
            n[i][0] = m;
            n[i][1] = 1;
        }
        flag=1;
    }
    for (i=0; i<10; i++) {
        if (n[i][0] != 0) {
            printf ("%d %d\n", n[i][0], n[i][1]);
        }
    }
    return 0;
}
