#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int aero, voos, teste = 0, value1, value2, maior;
    while(1){
        scanf("%d %d", &aero, &voos);
        if (aero == 0 && voos == 0)
            break;
        teste++;
        int *linhas = calloc(aero+1, sizeof(int));
        for (int i = 0; i < voos; i++){
            scanf("%d %d", &value1, &value2);
            linhas[value1]++, linhas[value2]++;
        }
        
        printf("Teste %d\n", teste);
        maior = 0;
        for (int i = 1; i <= aero; i++){
            if (linhas[i] > maior)
                maior = linhas[i];
        }
        for (int i = 1; i <= aero; i++){
            if (linhas[i] == maior)
                printf("%d ", i);
        }
        printf("\n\n");
    
        free(linhas);
    }
    return 0;
}
