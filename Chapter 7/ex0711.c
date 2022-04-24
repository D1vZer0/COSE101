/* 입력 : 3명의 국어/영어 성적을 각각 입력받음
   출력 : 각 학생마다 과목별 평균보다 낮은 점수를 학생멸로 한 줄씩 출력함 */
#include <stdio.h>

int main ()
{
    int i, j;
    int s[3][2], sum[2] = {0, 0};
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            scanf ("%d", &s[i][j]);
            sum [j] += s[i][j];
        }
    }
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            if (3*s[i][j] < sum[j]) {
                printf ("%d ", s[i][j]);
            }
        }
        printf ("\n");
    }
    
    return 0;
}
