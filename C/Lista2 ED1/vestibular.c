#include <stdio.h>
#include <stdlib.h>
int main() {
    int perguntas, counter = 0;
    scanf("%d", &perguntas);

    char *gabarito = (char*) calloc(perguntas+1, sizeof(char));
    char *respostas = (char*) calloc(perguntas+1, sizeof(char)); 
    
    scanf("%s", gabarito);
    scanf("%s", respostas);
    for (int i = 0; i <= perguntas; i++){
        if (gabarito[i] == respostas[i])
            counter+=1;
    }
    free(gabarito); 
    free(respostas);
    printf("%d\n", counter);
    return 0;
}
