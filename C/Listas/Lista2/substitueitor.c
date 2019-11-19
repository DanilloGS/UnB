#include <stdio.h>
void cleanBuffer();
int main(){
    char frase[10001], palavra[41], 
         substituir[41], fraseNova[10001], nextChar; 
    int bool = 0, counter = 0, sum = 0;
    scanf("%[^\n]", frase);
    cleanBuffer();
    scanf("%[^\n]", palavra);
    cleanBuffer();
    scanf("%[^\n]", substituir);
    cleanBuffer();

    for (int i = 0; frase[i] != '\0'; i++) {
        fraseNova[sum] = frase[i];
        if (frase[i] == palavra[0]){
            for (int j = 0; palavra[j] != '\0'; j++){
                if (frase[i+j] != palavra[j]) {
                    bool = 1;
                    break;
                }
            }
            if (bool == 0){
                for (int j = 0; substituir[j] != '\0'; j++){
                    fraseNova[sum + j] = substituir[j];                    
                    counter++;
                }
                sum += counter;
                // while ((frase[i+1] >= 'a' && frase[i+1] <= 'z') || (frase[i+1] >= 'A' && frase[i+1] <= 'Z')){
                //     i++;
                // }
            }
        }
        sum++;
        bool = 0;
    }
    printf("%s\n", fraseNova);
    return 0;
}
void cleanBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}