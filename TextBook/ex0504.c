#include <stdio.h>

int main()
{
    char c;
    scanf ("%c", &c);
    
    if ('A'<=c && c<='Z') {
        printf ("%c", c+'a'-'A');
    }
    else if ('a'<=c && c<='z') {
        printf ("%c", c+'A'-'a');
    }
    else {
        printf ("none");
    }
    
    return 0;
}
