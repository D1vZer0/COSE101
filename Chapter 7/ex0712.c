/* 입력 : [0, 5] 사이의 정수 세 개를 입력받음
   출력 : 배열에 저장된 출력값을 출력함 */
#include <stdio.h>

int main ()
{
    char c[6][5] = {{'Z','E','R','O','-'}, {'O','N','E','-','-'}, {'T','W','O','-','-'}, {'T','H','R','E','E'}, {'F','O','U','R','-'}, {'F','I','V','E','-'}};
    int i, j, n[3];
    scanf ("%d %d %d", &n[0], &n[1], &n[2]);
    
    for (i=0; i<3; i++) {
        for (j=0; j<5; j++) {
            printf ("%c", c[n[i]][j]);
        }
        printf ("\n");
    }
    
    return 0;
}
