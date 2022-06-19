#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student {
    char name[8];
    int kor;
    int eng;
    int mat;
    double avg;
    char grd;
} stu;

int main () 
{
    int n;
    scanf ("%d", &n);
    stu id[50], *p=NULL;
    
    for (int i=0; i<n; i++) {
        p = &id[i];
        scanf ("%s %d %d %d", p->name, &(p->kor), &(p->eng), &(p->mat));
        p->avg = (p->kor + p->eng + p->mat)/3;
        
        if (p->avg >= 90)
            p->grd = 'A';
        else if (p->avg >= 80)
            p->grd = 'B';
        else if (p->avg >= 70) 
            p->grd = 'C';
        else if (p->avg >= 60)
            p->grd = 'D';
        else
            p->grd = 'F';
    }
    for (int i=0; i<n; i++) {
        p = &id[i];
        printf ("%s %.1f %c\n", p->name, p->avg, p->grd);
    }
    
    return 0;
}
