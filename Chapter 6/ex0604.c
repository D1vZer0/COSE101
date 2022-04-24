/* 첫줄에 정수 N을 입력받음.
   그 다음의 입력이 N보다 작으면 "UP"을 출력, N보다 크면 "DOWN"을 출력함.
   입력이 N과 같으면 "RIGHT"를 출력하고 프로그램을 종료함. */
#include <stdio.h>

int main()
{
    int goal, input;
    scanf ("%d", &goal);
    
    do {
        scanf ("%d", &input);
        if (input > goal) {
            printf ("DOWN\n");
        }
        else if (input < goal) {
            printf ("UP\n");
        }
        else {
            printf ("RIGHT\n");
        }
    } while (input != goal);
    
    return 0;
}
