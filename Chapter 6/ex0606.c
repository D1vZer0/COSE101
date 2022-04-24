#include <stdio.h>

int main()
{
    int n, i, cCont=0, nCont=0, cNow=0, nNow=0, flag=-1;
    char temp;
    scanf ("%d", &n);
    
    getchar ();
    
    for (i=0; i<n; i++) {
        scanf ("%c", &temp);
        
        if ('a' < temp && temp < 'z') {
            if (flag != 0) {
                if (nNow > nCont) {
                    nCont = nNow;
                }
                nNow = 0;
                flag = 0;
            }
            cNow ++;
        }
        else if ('0' < temp && temp && '9') {
            if (flag != 1) {
                if (cNow > cCont) {
                    cCont = cNow;
                }
                cNow = 0;
                flag = 1;
            }
            nNow ++;
        }
        else {
            i--;
        }
    }
    
    if (cNow > cCont) {
        cCont = cNow;
    }
    if (nNow > nCont) {
        nCont = nNow;
    }
    printf ("%d\n%d", cCont, nCont);
    
    return 0;
}
