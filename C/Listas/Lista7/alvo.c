#include <stdio.h>
#include <stdlib.h>
int buscaSequencial(int *v, int x, int n)
{
    int acertou = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= x)
        {
            acertou = n - i;
            break;
        }
    }
    return acertou;
}
int binSearch(int *v, int compare, int n)
{
    int e = -1, d = n+1, m;
    
    while (e < d - 1)
    {
        m = (e + d) / 2;
        if (v[m] >= compare){
            d = m;
        }
        if (v[m] < compare)
            e = m+1;
    }
    return n+1-d;
}

void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}
void quicksort(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int pivot = arr[r];
    int cnt = l;
    for (int i = l; i <= r; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(&arr[cnt], &arr[i]);
            cnt++;
        }
    }
    quicksort(arr, l, cnt - 2);
    quicksort(arr, cnt, r);
}

int main()
{
    int c, t, score = 0, reta, shoot[2], max = 0;
    scanf("%d %d", &c, &t);
    int *circles = calloc(c + 1, sizeof(int));
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &circles[i]);
        circles[i] = circles[i]*circles[i];
    }
    quicksort(circles, 0, c-1);
    for (int i = 0; i < t; i++){
        scanf("%d %d", &shoot[0], &shoot[1]);
        reta = shoot[0]*shoot[0] + shoot[1]*shoot[1];
        score += (reta > circles[c-1]) ? 0:binSearch(circles, reta, c); 
    }
    printf("%d\n", score);
    free(circles);
    return 0;
}
