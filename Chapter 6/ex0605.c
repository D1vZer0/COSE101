/* 입력 : 첫 줄에 정수의 개수 n, 둘쨰 줄에 n개의 정수를 입력받음
   출력 : 입력받은 정수들 중 가장 큰 수와 두 번째로 큰 수를 출력함 */
#include <stdio.h>

int main()
{
    int n, temp, f, s, i;
    scanf ("%d", &n);
    scanf ("%d %d", &f, &s);
    
    if (s > f) {
        temp = f;
        f = s;
        s = temp;
    }
    
    for (i=0; i<n-2; i++) {
        scanf ("%d", &temp);
        if (temp > f) {
            f = temp;
        }
        else if (temp > s) {
            s = temp;
        }
    }
    
    printf ("%d %d", f, s);
    
    return 0;
}
