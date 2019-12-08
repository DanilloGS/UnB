#include<stdio.h>
#include<stdlib.h>
#define N 1001

void swap(int *value1, int *value2){
    int aux; 
    aux = *value1;
    *value1 = *value2;
    *value2 = aux;
}

void selectionSort(int *array, int count){
    int menor;
        for(int i = 0; i < count; i++){
            menor = i;            
            
            for(int j = i; j < count; j++){ 
                if(array[j] < array[menor]) 
                    menor = j;    
            }
            swap(&array[i], &array[menor]);
        }
}

void printArray(int *array, int count){
    for (int i = 0; i < count; i++){
        printf("%d", array[i]);
        if (i != count-1){
            printf(" ");
        }
    }
}

int main(int argc, char const *argv[])
{
    int count = 0;
    int *values = calloc(N, sizeof(int));

    while (scanf("%d", &values[count])!=EOF){
        count++;
    }
    selectionSort(values, count);
    printArray(values, count);
    printf("\n");
    free(values);
    return 0;
}
