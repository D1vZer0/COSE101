/* 입력 : 10개의 정수
   출력 : 어떤 정수가 몇번 등장했는지 입력 순서대로 출력. 
          입력받은 숫자와 총 입력 횟수를 함께 출력하되, 동일한 수에 대해서는 한 번만 출력할 것. */
#include <stdio.h>

int main ()
{
    int i=0, j=0, temp, cnt=0, n[10][2];
    for (i=0; i<10; i++) {
        n[i][1] = 0;
    }
    
    for (i=0; i<10; i++) {
        scanf ("%d", &temp);
        
        for (j=0; j<cnt; j++) {
            if (temp == n[j][0]) {
                n[j][1]++;
                break;
            }
        }
        if (j == cnt) {
            n[cnt][0] = temp;
            n[cnt][1] = 1;
            cnt++;
        }
    }
    
    for (i=0; i<cnt; i++) {
        printf ("%d %d\n", n[i][0], n[i][1]);
    }
    
    return 0;
}
