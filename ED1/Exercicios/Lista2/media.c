#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int count, media=0, bool = 0;
    scanf("%d", &count);
    int *arr = malloc((count+1)*sizeof(int));
    for (int i = 0; i < count; i++){
        scanf("%d", &arr[i]);
        media+=arr[i];
    }
    for (int i = 0; i < count; i++)
        if (arr[i]>media/count){
            bool==0?printf("%d", arr[i]):printf(" %d", arr[i]);
            bool++;
        }    
        
    if (bool == 0)
        printf("0");
    printf("\n");
    free(arr);
    return 0;
}
