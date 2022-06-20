#include <stdio.h>
#include <stdlib.h>

typedef struct dateymd {
    int year;
    int mon;
    int day;
} date;

date* select_min (date* dA, date* dB);

int main ()
{
    date d1, d2;
    scanf ("%d/%d/%d", &d1.year, &d1.mon, &d1.day);
    scanf ("%d/%d/%d", &d2.year, &d2.mon, &d2.day);
    
    date* ptr = select_min (&d1, &d2);
    
    printf ("%d/%d/%d", ptr->year, ptr->mon, ptr->day);
    
    return 0;
}

date* select_min (date* dA, date* dB) {
    int sumA = dA->year*10000 + dA->mon*100 + dA->day;
    int sumB = dB->year*10000 + dB->mon*100 + dB->day;
    
    if (sumA <= sumB)
        return dA;
    else
        return dB;
}
