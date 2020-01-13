#include <stdio.h>
int encaixa(int a, int b){
    int n, i = 1;
    a = a<0? a*-1: a;
    b = b<0? b*-1: b;
    n = b;
    while (n > 10) {
        n/=10;
        i*=10;
    }
    // printf("-------> %d\n", i);
    return a%(10*i)==b;
}
int main(int argc, char const *argv[])
{
    printf("%d\n", encaixa(110,1100));
    return 0;
}
