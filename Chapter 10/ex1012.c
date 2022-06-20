#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[100], str2[100];
    scanf ("%[^\n]s", str1);
    getchar();
    scanf ("%s", str2);
    int L = strlen(str2), flag=1, cnt=0;
    
    for (int i=0; i<strlen(str1); i++) {
        flag = 1;
        for (int j=0; j<L; j++) {
            if (str1[i+j] != str2[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            cnt++;
            i += (L-1);
        }
    }
    
    printf ("%d", cnt);
    
    return 0;
}
