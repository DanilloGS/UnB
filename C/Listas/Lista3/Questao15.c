#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *concat(char *frase1, char *frase2);
void cleanBuffer();
int main(int argc, char const *argv[]){
    int tamanhoStr1, tamanhoStr2;
    printf("Qual o tamanho máximo da primeira frase?\n");
    scanf("%d", &tamanhoStr1);
    printf("Qual o tamanho máximo da segunda frase?\n");
    scanf("%d", &tamanhoStr2);

    char *str1= calloc(tamanhoStr1+1, sizeof(char));
    char *str2= calloc(tamanhoStr2+1, sizeof(char));
    
    cleanBuffer();
    scanf("%[^\n]", str1);

    cleanBuffer();    
    scanf("%[^\n]", str2);

    printf("%s\n", concat(str1, str2));

    free(str1);
    free(str2);

    return 0;
}

char *concat(char *frase1, char *frase2){
    return strcat(frase1, frase2);
}

void cleanBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}