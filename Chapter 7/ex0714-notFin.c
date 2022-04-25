/* 입력 : [0, 5] 사이의 정수 세 개를 입력받음
   출력 : 배열에 저장된 출력값을 출력함 */
#include <stdio.h>

int main ()
{
    int n, m, i, j, x1, y1, x2, y2, temp;
    scanf ("%d %d", &n, &m);
    int mat[n][m];
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf ("%d", &mat[i][j]);
        }
    }
    scanf ("%d %d", &x1, &y1);
    scanf ("%d %d", &x2, &y2);
    if (x1 > x2) {
        temp = x1;
        x1 = x2;
        x2 = temp;
    }
    if (y1 > y2) {
        temp = y1;
        y1 = y2;
        y2 = temp;
    }
    int xL = x2-x1+1, yL = (y2-y1+2)/2;
    
    for (i=0; i<xL; i++) {
        for (j=0; j<yL; j++) {
            temp = mat[x1+i][y1+j];
            mat[x1+i][y1+j] = mat[x2-i][y2-j];
            mat[x2-i][y2-j] = temp;
        }
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf ("%d ", mat[i][j]);
        }
        printf ("\n");
    }
    
    return 0;
}
