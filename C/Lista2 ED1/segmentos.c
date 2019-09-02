#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int encaixa(int a, int b);
int segmento(int a, int b); 
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("%d\n", encaixa(num1, num2));
    return 0;
}
int encaixa(int a, int b){
    if (a%100 == b%100)
        return 1;
    else
        return 0;
}
int segmento(int a, int b){
    
}