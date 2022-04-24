//ex0614에서 출력이 중복되지 않는 버전입니다.

#include <stdio.h>

int main ()
{
    int n, i, j, k;
    scanf ("%d", &n);
    
    for (i=1; i<=6; i++) {
        for (j=i; j<=6; j++) {
            for (k=j; k<=6; k++) {
                if (i+j+k == n) {
                    printf ("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    
    return 0;
}
