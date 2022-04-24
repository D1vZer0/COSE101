#include <stdio.h>

int main()
{
    int type, input, f=0, o=0;
    scanf ("%d", &type);
    scanf ("%d", &input);
    
    switch (type) {
        case 1 :
            printf ("Americano\n");
            input -= 500;
            break;
        case 2 :
            printf ("Cafe Latte\n");
            input -= 400;
            break;
        case 3 :
            printf ("Lemon Tea\n");
            input -= 300;
            break;
    }
    
    for (input; input>=500; input-=500) {
        f++;
    }
    o = input/100;
    
    printf ("%d %d", f, o);
    
    return 0;
}
