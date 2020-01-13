#include<stdio.h>
int main(int argc, char const *argv[])
{
    int count;
    scanf("%d", &count);
    for (int i = 1; i <= count; i++){
        for (int j = 0; j < i; j++){
            (j+1!=i) ? printf("%02d ", i):printf("%02d", i);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= count; i++){
        for (int j = 1; j <= i; j++){
            (j!=i) ? printf("%02d ", j):printf("%02d", j);
        }
        printf("\n");
    }
    return 0;
}
