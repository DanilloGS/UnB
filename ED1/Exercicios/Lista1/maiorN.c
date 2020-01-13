#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, maior = 0;
    while(scanf("%d", &x) != EOF){
        if (x > maior)
            maior = x;
    }
    printf("%d\n", maior);
    return 0;
}
