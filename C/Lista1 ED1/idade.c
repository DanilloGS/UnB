#include <stdio.h>
int main(){
    int data1[2], data2[2], aux;
    scanf("%d %d %d", &data1[0], &data1[1], &data1[2]);
    scanf("%d %d %d", &data2[0], &data2[1], &data2[2]);
    if (((data1[0] < 1 && data1[0] > 35) || (data2[0] < 1 && data2[0] > 35)) ||
        ((data1[1] < 1 && data1[1] > 15) || (data2[1] < 1 && data2[1] > 15)) ||
        ((data1[2] < 0 && data1[2] > 9999) || (data2[2] < 0 && data2[2] > 9999))){
        printf("data invalida\n");
    }
    else{
        if (){
            /* code */
        }
        
    }
    
    return 0;
}