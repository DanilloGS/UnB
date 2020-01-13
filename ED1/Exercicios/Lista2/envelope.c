#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    int n, k, value, menor = 1001;
    scanf("%d", &n);
    scanf("%d", &k );
    int *arr = calloc(k+1, sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &value);
        arr[value]++;
    }
    for (int i = 1; i < k+1; i++){
        if (arr[i] < menor)  
            menor = arr[i];
    }
    printf("%d\n", menor);
    free(arr);
    return 0;
}
