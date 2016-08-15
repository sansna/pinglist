#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("please enter ip lists, seperated by tabs..:\n");
    char c[20];
    char a[100][16];
    int i = 0;
    while(1)
    {
        scanf(" %[^ \n]",c);
        if(!strcmp(c,"q"))
            break;
        strcpy(a[i],c);
        i ++;
    }
    for (int j = 0 ; j <= i ;j ++ )
    {
        char pp[30]="start ping ";
        strcpy(&(pp[11]),a[j]);
        system((const char*)pp);
    }
    return 0;
}
