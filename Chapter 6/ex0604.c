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
