#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100000001

void countingSort(int *array, int count){
    int *aux = calloc(N ,sizeof(int));
        for(int i = 0; i < count; i++) 
            aux[array[i]]++;  
        for(int i = 1, j = 0; i <= count+1; i++){
                while(aux[i]>0){
                    array[j] = i;
                    j++;
                    aux[i]--;
            }
        }
        free(aux);
}

void printArray(int *array, int count){
    for (int i = 0; i < count; i++){
        printf("%d", array[i]);
        if (i != count-1){
            printf(" ");
        }
    }
}

int main()
{
    int count = 0;
    int *values = calloc(N, sizeof(int));
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
        scanf("%d", &values[i]);
    countingSort(values, count);
    printArray(values, count);
    printf("\n");
    free(values);
    return 0;
}
