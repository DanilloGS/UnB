#include <stdio.h>
int main(int argc, char const *argv[]){
    int c, a;
    scanf("%d", &c);
    scanf("%d", &a);
    c = c - 1;
    a % c == 0 ? printf("%d\n", a / c) : printf("%d\n", (a / c) + 1);
    return 0;
}
