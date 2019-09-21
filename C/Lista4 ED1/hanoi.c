#include <stdio.h>
int hanoi(int discos){
    if (discos == 1){
        return 1;
    }
    else {
        return 2*hanoi(discos-1)+1; 
    }    
}
int main(int argc, char const *argv[]){
    int number, counter = 1;
    while(1){
        scanf("%d", &number);
        if (number == 0)
            break;
        printf("Teste %d\n%d\n", counter, hanoi(number));
        counter++;
    } 
    return 0;
}
