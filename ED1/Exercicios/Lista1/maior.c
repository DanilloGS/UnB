#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, maior = 0;
    for (int i = 0; i < 4; i++){
        scanf("%d", &x);
        if (x > maior)
            maior = x;
    }
    printf("%d\n", maior);
    return 0;
}
