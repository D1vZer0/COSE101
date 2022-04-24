/* 입력 : 첫 줄에 입력받을 정수의 개수 n(2<=n<=100)과 임의의 정수 m을 입력받고
          둘째 줄에는 서로 다른 n개의 정수를 입력받음.
   출력 : 입력받은 n개의 정수 중 서로 다른 두 개를 더했을 때 m이 되는 경우의 수를 출력함. */
#include <stdio.h>

int main ()
{
    int n, m, i, j, cnt=0;
    
    scanf ("%d %d", &n, &m);
    int k[n];
    for (i=0; i<n; i++) {
        scanf ("%d", &k[i]);
    }
    
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (k[i] + k[j] == m) {
                cnt++;
            }
        }
    }
    printf ("%d", cnt);
    
    return 0;
}
