#include <stdio.h>

int main ()
{
    int y;
    int ToF;
    scanf ("%d", &y);
    if (y%100==0 && y%400!=0) { // 윤년 계산
        ToF = 0;
    }
    else if (y%4 == 0) {
        ToF = 1;
    }
    else {
        ToF = 0;
    }
    
    if (ToF) {
        printf ("leap year");
    }
    else {
        printf ("common year");
    }
  
    return 0;
}
