/* 입력 : 5개의 정수를 입력받음
   출력 : 인접한 원소끼리 교환해가며 가장 큰 수를 맨 뒤로 이동시킨 결과물을 출력함 */
#include <stdio.h>

int main ()
{
    int i, temp, k[5];
    for (i=0; i<5; i++) {
        scanf ("%d", &k[i]);
    }
    for (i=0; i<4; i++) {
        if (k[i] > k[i+1]) {
            temp = k[i];
            k[i] = k[i+1];
            k[i+1] = temp;
        }
    }
    for (i=0; i<5; i++) {
        printf ("%d ", k[i]);
    }
    
    return 0;
}
