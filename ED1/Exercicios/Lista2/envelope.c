#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    int n, k, value, menor;
    scanf("%d", &n);
    scanf("%d", &k );

    int *arr = calloc(k+1, sizeof(int));
    
    for (int i = 0; i < n; i++){
        scanf("%d", &value);
        arr[value]++;
    }
    menor = arr[1];
    for (int i = 1; i <= k; i++){
        if (arr[i] < menor)  
            menor = arr[i];
    }
    printf("%d\n", menor);
    free(arr);
    return 0;
}
