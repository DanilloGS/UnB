#include <stdio.h>
#include <stdlib.h>
int search(int *arr, int num, int count){
    for (int i = 0; i < count; i++)
        if (arr[i] == num)
            return 1;    
    return 0;
}
int main(int argc, char const *argv[])
{
    int count, num;
    scanf("%d", &count);
    int *arr = malloc((count+1)*sizeof(int));

    for (int i = 0; i < count; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &num);    

    search(arr, num, count)?printf("pertence\n"):printf("nao pertence\n");

    free(arr);
    return 0;
}
