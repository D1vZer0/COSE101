/* 정답이 n글자이며 최대 유추 횟수가 10회인 행맨게임. 정답을 맞추면 그 즉시 종료됨.
   입력 : 첫 줄에는 정답의 길이 n, 둘째 줄에는 n개의 정답 문자열, 세 번째 줄부터는 유추할 문자가 하나씩 입력됨
   출력 : 매 입력에 대해 지금까지 맞은 글자들을 표시하고, 맞추지 못한 글자는 "_"로 표시함 */
#include <stdio.h>

int main ()
{
    int i, n;
    scanf ("%d", &n);
    getchar ();
    int life = 10, hang = n; 
    
    char c[n] [2], g;
    for (i=0; i<n; i++) {
        scanf ("%c", &c[i][0]);
        c[i][1] = 0;
    }
    
    while (life>0 && hang>0) {
        getchar ();
        scanf ("%c", &g);
        for (i=0; i<n; i++) {
            if (c[i][0] == g) {
                if (c[i][1] == 0) {
                    hang--;
                }
                c[i][1] = 1;
            }
        }
        for (i=0; i<n; i++) {
            if (c[i][1]) {
                printf ("%c", c[i][0]);
            }
            else {
                printf ("_");
            }
        }
        printf ("\n");
        life--;
    }
    
    return 0;
}
