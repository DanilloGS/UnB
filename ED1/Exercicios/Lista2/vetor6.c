#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int count, par = 0, impar = 0, num;
    scanf("%d", &count);
    int *arr1 = malloc((count+1)*sizeof(int));
    int *arr2 = malloc((count+1)*sizeof(int));

    for (int i = 0; i < count; i++)
        scanf("%d", &arr1[i]);
    for (int i = 0; i < count; i++)
        scanf("%d", &arr2[i]);
    for (int i = 0; i < count; i++)
        i+1!=count?printf("%d ", arr1[i]+arr2[i]):printf("%d\n", arr1[i]+arr2[i]);

    free(arr1);
    free(arr2);

    return 0;
}
