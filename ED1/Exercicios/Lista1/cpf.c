#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int total = 0, dig1, dig2, bool;
    long int x;
    scanf("%ld", &x);
    total += 10 * ((x / 10000000000));
    total += 9 * ((x / 1000000000) % 10);
    total += 8 * ((x / 100000000) % 10);
    total += 7 * ((x / 10000000) % 10);
    total += 6 * ((x / 1000000) % 10);
    total += 5 * ((x / 100000) % 10);
    total += 4 * ((x / 10000) % 10);
    total += 3 * ((x / 1000) % 10);
    total += 2 * ((x / 100) % 10);
    dig1 = (x / 10) % 10;
    dig2 = x % 10;
    bool = (11 - total % 11) > 9 ? 0 : (11 - total % 11); 
    if (dig1 == bool){
        total = 0;
        total += 11 * (x / 10000000000);
        total += 10 * ((x / 1000000000) % 10);
        total += 9 * ((x / 100000000) % 10);
        total += 8 * ((x / 10000000) % 10);
        total += 7 * ((x / 1000000) % 10);
        total += 6 * ((x / 100000) % 10);
        total += 5 * ((x / 10000) % 10);
        total += 4 * ((x / 1000) % 10);
        total += 3 * ((x / 100) % 10);
        total += 2 * ((x / 10) % 10);
        bool = (11 - total % 11) > 9 ? 0 : (11 - total % 11); 
        if (bool == dig2){
            printf("valido\n");
            return 0;
        }
    }
    printf("invalido\n");
    return 0;
}
