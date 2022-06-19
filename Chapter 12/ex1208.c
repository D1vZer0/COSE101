#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int n;
    char *str[100];
    char tmp[100];
    int grd[100];
    
    scanf ("%d", &n);
    getchar();
    
    for (int i=0; i<n; i++) {
        
        grd[i] = 0;
        scanf ("%[^\n]s", tmp);
        getchar();
        
        str[i] = (char*) malloc((strlen(tmp)+1)*sizeof(char));
        strcpy (str[i], tmp);
        
        for (int j=0; j<i; j++) {
            if (strlen(str[i]) < strlen(str[j])) 
                grd[i]++;
            else if (strlen(str[i]) > strlen(str[j]))
                grd[j]++;
        }
    }
    
    for (int i=0; i<n; i++) 
        for (int j=0; j<n; j++) 
            if (grd[j] == i) 
                printf ("%s\n", str[j]);
    
    for (int i=0; i<n; i++)
        free (str[i]);
        
    return 0;
}
