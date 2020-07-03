#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, total = 7;
    scanf("%d",&x);
    for (int i = 11; i <= x; i++) 
        if (i < 31) total+=1;
        else if (i > 30 && i < 101) total+=2;
        else total+=5;
    printf("%d\n", total);
    return 0;
}
