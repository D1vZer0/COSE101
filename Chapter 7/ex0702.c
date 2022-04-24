/* 입력 : 첫쨰 줄에 입력받을 문자의 개수 n, 둘째 줄에 알파벳 소문자 n개를 입력받음
   출력 : 연속된 문자로 cat이 나타나는 횟수 */
#include <stdio.h>

int main ()
{
    int n, i, cnt=0;
    scanf ("%d", &n);
    getchar ();
    
    char c[n];
    for (i=0; i<n; i++) {
        scanf ("%c", &c[i]);
    }
    for (i=0; i<n-2; i++) {
        if (c[i] == 'c') {
            if (c[i+1] == 'a') {
                if (c[i+2] == 't') {
                    cnt++;
                    i+=3;
                }
            }
        }
    }
    printf ("%d", cnt);
    
    return 0;
}
