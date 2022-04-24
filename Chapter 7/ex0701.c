/* 입력 : 첫 줄에 입력받을 정수의 개수 n, 둘째 줄에 n개의 정수를 입력받음
   출력 : 평균보다 큰 입력 정수를 입력 순서대로 출력함 */
#include <stdio.h>

int main ()
{
    int temp, count=0, sum=0;
    
    scanf ("%d", &temp);
    while (temp > 0) {
        if (temp<=100) {
            count++;
            sum += temp;
        }
        scanf ("%d", &temp);
    }
    double avg = sum*100/count;
    avg /= 100;
    
    printf ("%d %.2lf %d", sum, avg, count);
    
    return 0;
}
