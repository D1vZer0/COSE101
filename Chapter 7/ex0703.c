/* 입력 : 5개의 문자
   출력 : 입력받은 문자를 한 줄에 한 칸씩 shift해서 정사각형 모양 출력 */
#include <stdio.h>

int main ()
{
    int i, j;
    char c[5];
    for (i=0; i<5; i++) {
        scanf ("%c", &c[i]);
    }
    
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (j-i <0) {
                printf ("%c", c[j-i+5]);
            }
            else {
                printf ("%c", c[j-i]);
            }
        }
        printf ("\n");
    }
    
    return 0;
}
