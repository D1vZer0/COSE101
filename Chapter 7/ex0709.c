/* 입력 : 5개의 정수를 입력받음
   출력 : 입력받은 정수를 bubble sort하는 매 step을 출력함 */
#include <stdio.h>

int main ()
{
    int i, j, temp, k[5];
    for (i=0; i<5; i++) {
        scanf ("%d", &k[i]);
    }
    for (j=0; j<4; j++) {
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
        printf ("\n");
    }
    
    return 0;
}
