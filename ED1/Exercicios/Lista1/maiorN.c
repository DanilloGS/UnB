#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, maior;
    scanf("%d", &maior);
    while(scanf("%d", &x) != EOF){
        if (x > maior)
            maior = x;
    }
    printf("%d\n", maior);
    return 0;
}
