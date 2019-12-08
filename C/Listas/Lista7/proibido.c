#include <stdio.h>
#include <stdlib.h>

void shellSort(int *vet, int size)
{
    int i, j, value;

    int h = 1;
    while (h < size)
    {
        h = 3 * h + 1;
    }
    while (h > 0)
    {
        for (i = h; i < size; i++)
        {
            value = vet[i];
            j = i;
            while (j > h - 1 && value <= vet[j - h])
            {
                vet[j] = vet[j - h];
                j = j - h;
            }
            vet[j] = value;
        }
        h = h / 3;
    }
}

int binSearch(int *array, int compare, int count)
{
    int e = -1, d = count, m;
    while (e < d - 1)
    {
        m = (e + d) / 2;
        if (array[m] == compare)
            return 1;
        if (array[m] < compare)
            e = m;
        else
            d = m;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int n, valor, max = 0;
    scanf("%d", &n);
    int *v = calloc(n + 1, sizeof(unsigned int));
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    shellSort(v, n);
    while (scanf("%d", &valor) != EOF)
        binSearch(v, valor, n) ? printf("sim\n") : printf("nao\n");
    return 0;
}
