#include <stdio.h>
#include <stdlib.h>

int main(){
    int total, tamanho;
    char lado;
    while (scanf("%d", &total) != EOF){
        int count = 0;
        int *right = calloc(100, sizeof(int));
        int *left = calloc(100, sizeof(int));
        while (total--){
            scanf("%d %c", &tamanho, &lado);
            if (lado == 'E')
                left[tamanho]++;            
            else
                right[tamanho]++;
            
            if (left[tamanho] && right[tamanho]){
                left[tamanho]--;
                right[tamanho]--;
                count++;
            }
        }
        free(right);
        free(left);
        printf("%d\n", count);
    }

    return 0;
}