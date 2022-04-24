/* 입력 : 두 정수 n, m (n <= m)
   출력 : 구구단 n단부터 m단까지 나란히 출력 */
#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf ("%d %d", &n, &m);
    
    for (i=1; i<=9; i++) {
        for (j=n; j<=m; j++) {
            printf ("%dX%d=%2d ", j, i, j*i);
        }
        printf ("\n");
    }
    
    return 0;
}
