/* 입력 : 양의 정수 N
   출력 : N의 모든 양수 (오름차순 정렬) */
#include <stdio.h>

int main()
{
    int n, i;
    scanf ("%d", &n);
    for (i=1; i<=n; i++) {
        if (n%i == 0) {
            printf ("%d ", i);
        }
    }
    
    return 0;
}
