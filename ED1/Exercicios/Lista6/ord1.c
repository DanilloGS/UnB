#include <stdio.h>
#include <stdlib.h>

swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x; 
}

bubbleSort(int *array, int n) {
    if (n != 0) {
        for (int i = 1; i < n; i++)
            if(array[i] < array[i-1])
                swap(&array[i], &array[i-1]);
        bubbleSort(array, n-1);
    }
}

int main() {
    int n = 0;
    int *array = malloc(1001*sizeof(int));
    while (scanf("%d", &array[n]) != EOF) n++;
    bubbleSort(array, n);
    for (int i = 0; i < n; i++) {
        i+1 == n ? printf("%d\n", array[i]):printf("%d ", array[i]);
    }
    free(array);
    return 0;
}