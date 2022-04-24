/* 입력 : 첫 줄에 문자의 개수 n, 둘째 줄에 n개의 문자를 입력받음
   출력 : 입력받은 문자를 한 줄에 한 칸씩 오른쪽으로 shift하며 정사각형 모양으로 출력함 */
#include <stdio.h>

int main ()
{
    int i, j, n;
    scanf ("%d", &n);
    char c[n];
    getchar ();
    
    for (i=0; i<n; i++) {
        scanf ("%c", &c[i]);
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (j-i <0) {
                printf ("%c", c[j-i+n]);
            }
            else {
                printf ("%c", c[j-i]);
            }
        }
        printf ("\n");
    }
    
    return 0;
}
