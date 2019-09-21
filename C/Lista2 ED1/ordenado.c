#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void cleanBuffer();
void cmpChar(char word[]);
int main(int argc, char const *argv[]){
    int count, bool = 0;
    char palavra[10000][43], letra;
    scanf("%d", &count);
    for (int i = 0; i < count; i++){
        cleanBuffer();
        scanf("%[^\n]", palavra[i]);
    }
    for (int i = 0; i < count; i++){
        for (int j = 1; palavra[i][j] != '\0'; j++){
            letra = palavra[i][0]; 
            if (tolower(palavra[i][j]) > tolower(letra)){
                letra = palavra[i][j];
            }
            else {
                bool = 1;
                break;
            }  
        }
        if (bool == 0)
            printf("%s: O\n", palavra[i]);
        else         
            printf("%s: N\n", palavra[i]);            
        bool = 0;
    }
    return 0;
}
void cleanBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}