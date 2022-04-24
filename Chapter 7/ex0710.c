/* 입력 : 첫 줄에는 정수 n을, 둘째 줄부터는 n*n square matrix를 입력받음
   출력 : 주대각선에 위치한 원소들만 서로 순서를 바꾸어 출력함 */
#include <stdio.h>

int main ()
{
    int n, i, j, temp;
    scanf ("%d", &n);
    int m [n][n];
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            scanf ("%d", &m[i][j]);
        }
    }
    
    for (i=0; i<n/2; i++) {
        temp = m[i][i];
        m[i][i] = m[n-1-i][n-1-i];
        m[n-1-i][n-1-i] = temp;
        
        temp = m[i][n-1-i];
        m[i][n-1-i] = m[n-1-i][i];
        m[n-1-i][i] = temp;
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf ("%d ", m[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}
