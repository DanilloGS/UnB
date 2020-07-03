#include <stdio.h>

int main ()
{
    char name[101];
    int lastSpace=0;
    scanf("%[^\n]", name);
    for (int i = 0; name[i]!='\0'; i++){
        if (name[i]==' ')
            lastSpace = i;
    }
    
    for (int i = 0; name[i]!='\0'; i++){
        if (name[i]!=' ')
            name[i]<97?printf("%c", name[i]+32):printf("%c", name[i]);
        else
            break;
    }
    printf(".");
    for (int i = lastSpace+1; name[i]!='\0'; i++)
    {
        name[i]<97?printf("%c", name[i]+32):printf("%c", name[i]);
        
    }
    printf("@unb.br\n");
    return 0;
}