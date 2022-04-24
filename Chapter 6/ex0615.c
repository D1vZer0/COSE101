/* 입력 : 금액을 나타내는 양의 정수 n
   출력 : 900원짜리 a, 750원짜리 b, 200원짜리 c의 세 상품을 구매하는 모든 경우의 수 출력 */
#include <stdio.h>

int main ()
{
    int a=900, b=1500, c=200, m, flag = 1;
    scanf ("%d", &m);
    
    for (a=900; a<m; a+=900) {
        for (b=1500; a+b<m; b+=1500) {
            for (c=200; c/200 < a/900 || c/200 < b/750; c+= 200) {
                if (a+b+c == m) {
                    printf ("%d %d %d\n", a/900, b/750, c/200);
                    flag = 0;
                }
            }
        }
    }
    if (flag) {
        printf ("none");
    }
    
    return 0;
}
