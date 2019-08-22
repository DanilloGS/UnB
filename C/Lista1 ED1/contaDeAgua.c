#include <stdio.h>
int main(){
    int consumo, valor=7;
    scanf("%d", &consumo);
    while (consumo >= 11){
        if (consumo >= 101)
            valor += 5;
        else if (consumo >= 31 && consumo <= 100)
            valor+=2;
        else 
            valor+=1;
        consumo--;
    }
    printf("%d\n", valor);
    return 0;
}