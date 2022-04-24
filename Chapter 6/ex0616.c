/* 입력 : 0~100 사이의 정수를 양수가 아닌 수를 입력받을 때까지 입력받음 (마지막 수는 포함하지 않음)
   출력 : 입력받은 정수들의 합, 평균, 개수를 출력함
   조건 : 평균은 소수점 둘째 자리까지 출력할 것, 100을 넘는 수를 입력받았을 시 합&평균&개수 계산에서 제외할 것 */
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
