#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, count = 0;
    while(scanf("%d", &x) != EOF)
        count++;
    printf("%d\n",count);
    return 0;
}
