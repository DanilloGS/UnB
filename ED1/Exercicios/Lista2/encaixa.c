#include <stdio.h>
#include <math.h>
int encaixa(int a, int b){
    int n = b, i = 0, m = 1;
    a = a < 0 ? a*-1 : a;
    b = b < 0 ? b*-1 : b;
    while (n > 0){
        n/=10;
        m*=10;
    }
    return a%m == b;
}
int main(int argc, char const *argv[])
{
    int x = encaixa(1111, 2);
    printf("%d\n", x);
    return 0;
}
