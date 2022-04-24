/* 입력 : 양의 정수를 최대 100개까지 반복해서 입력받으며, 중복된 숫자를 입력받으면 입력이 종료됨
   출력 : 중복된 숫자를 입력받기 이전까지의 양의 정수의 합을 출력함. */
#include <stdio.h>

int main ()
{
    int i=-1, j, n[100], sum=0;
    
    do {
        i++;
        scanf ("%d", &n[i]);
        sum += n[i];
        for (j=0; j<i; j++) {
            if (n[i] == n[j]) {
                break;
            }
        }
    } while (i == j);
    
    printf ("%d", sum - n[i]);
    
    return 0;
}
