#include <stdio.h>
#include <stdlib.h>
struct test {
    char a;
    int b;
    float c;
};
int main(int argc, char const *argv[]){
    int array[20];
    struct test teste;
    printf("TAMANHOS\n"
           "\tchar %ld\n"
           "\tshort %ld\n"
           "\tint %ld\n"
           "\tlont int %ld\n"
           "\tfloat %ld\n"
           "\tdouble %ld\n"
           "\tlong double %ld\n"
           "\tarray %ld\n"
           "\tstruct %ld\n",
           sizeof(char), sizeof(short),
           sizeof(int), sizeof(long int),
           sizeof(float), sizeof(double),
           sizeof(long double), sizeof(array),
           sizeof(teste));
    return 0;
}