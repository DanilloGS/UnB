#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}

void ordena (int *v, int n) {
    for (int i = 1; i < n; i++) 
        for (int j = i; j > 0 && v[j] < v[j-1]; --j)
            swap(&v[j], &v[j-1]);
}

int main(int argc, char const *argv[]) {
    int n = 0;
    int *array = malloc(1001*sizeof(int));
    while (scanf("%d", &array[n]) != EOF) n++;
    ordena(array, n);
    for (int i = 0; i < n; i++) {
        i+1 == n ? printf("%d\n", array[i]):printf("%d ", array[i]);
    }
    free(array);
    return 0;
}
