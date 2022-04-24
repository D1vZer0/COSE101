/* 입력 : 0이 나올 때까지 정수들을 계속해서 입력받음
   출력 : 입력받은 정수들의 합, 최솟값, 최댓값을 차례대로 출력 (0은 미포함) */
#include <stdio.h>

int main()
{
    int temp, low, hi, sum=0;
    scanf ("%d", &temp);
    low = temp;
    hi = temp;
    
    while (temp != 0) {
        if (temp < low) {
            low = temp;
        }
        if (temp > hi) {
            hi = temp;
        }
        sum += temp;
        
        scanf ("%d", &temp);
    }
    
    printf ("%d %d %d", sum, low, hi);
    
    return 0;
}
