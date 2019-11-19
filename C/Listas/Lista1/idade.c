#include <stdio.h>
int main() {
    int data1[3], data2[3], dia, mes, ano, bool = 0;
    scanf("%d %d %d", &data1[0], &data1[1], &data1[2]);
    scanf("%d %d %d", &data2[0], &data2[1], &data2[2]);
    if (((data1[0] < 1 || data1[0] > 31) || (data2[0] < 1 || data2[0] > 31)) ||
        ((data1[1] < 1 || data1[1] > 12) || (data2[1] < 1 || data2[1] > 12)) ||
        ((data1[2] < 0 || data1[2] > 9999) || (data2[2] < 0 && data2[2] > 9999))) {
        bool = 1;
    }
    else {
        if (data1[2] <= data2[2]) {
            ano = data2[2] - data1[2];
            if (data1[2] == data2[2] && data1[1] > data2[1]) {
                bool = 1;
            }
            else {
                mes = data2[1] - data1[1];
                if (mes < 0) {
                    mes = 12 + mes;
                    ano-=1;
                }
                if (data1[1] == data2[1] && data1[0] > data2[0]) {
                    bool = 1;
                }
                else {
                    dia = data2[0] - data1[0];
                    if (dia < 0) {
                        dia=31+dia;
                        mes-=1;
                    }
                    printf("%d\n%d\n%d\n", ano, mes, dia);
                }
            }
        }  
    } 
    if (bool == 1)
    {
        printf("data invalida\n");
    }
    
    return 0;
}