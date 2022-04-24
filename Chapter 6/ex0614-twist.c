/* 입력 : [3, 18]의 정수 N
   출력 : 세 개의 주사위를 굴려 합이 N이 나오는 모든 경우 (중복되지 않도록) */

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
