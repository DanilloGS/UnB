#include <stdio.h>
#define true 1
int f91(int n) {
    if (n >= 101)
        n -= 10;
    else 
        return f91(f91(n+11));
    return n;
}
int main() {
    int x;
    scanf("%d", &x);
    while(x) {
        printf("f91 (%d) = %d\n", x, f91(x));
        scanf("%d", &x);
    }
    return 0;
}
