#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    if (n<0) {
        printf ("cold, indoor");
    }
    else if (n<40) {
        printf ("moderate, outdoor");
    }
    else {
        printf ("hot, indoor");
    }

    return 0;
}
