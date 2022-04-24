/* 입력 : 첫 줄에 입력받을 문자의 개수 n을, 둘째 줄에 n개의 문자를 입력받음 (문자는 숫자와 영어 소문자로만 이루어짐)
   출력 : 영어 소문자와 숫자가 각각 최대 몇 글자까지 연속으로 나왔는지 출력함 */
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
