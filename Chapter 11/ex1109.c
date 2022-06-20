#include <stdio.h>
#include <stdlib.h>

typedef struct result {
    int hi;
    int lo;
    char pof;
    int vP;
    int gap;
} rst;

void pass_or_fail (rst* p);

int main ()
{
    rst sco;
    scanf ("%d %d %d", &sco.hi, &sco.lo, &sco.vP);
    sco.gap = sco.hi - sco.lo;
    pass_or_fail (&sco);
    
    printf ("%d %c", sco.gap, sco.pof);
    
    return 0;
}

void pass_or_fail (rst* p) {
    if (p->gap <= p->vP)
        p->pof = 'P';
    else
        p->pof = 'F';
}
