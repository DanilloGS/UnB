#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, pares = 0;
    char lado;
    int *direita = calloc(61, sizeof(int));
    int *esquerda = calloc(61, sizeof(int));
    while (scanf("%d %c", &tamanho, &lado) != EOF) {
        switch (lado) {
        case 'D':
            direita[tamanho]++;
            break;
        case 'E':
            esquerda[tamanho]++;
            break;
        }
        if (direita[tamanho] && esquerda[tamanho]) {
            direita[tamanho] -= 1;
            esquerda[tamanho] -= 1;
            pares += 1;
        }
    }
    free(direita);
    free(esquerda);
    printf("%d\n", pares);
    return 0;
}
