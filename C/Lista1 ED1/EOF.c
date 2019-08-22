#include <stdio.h>
int main(){
    int number, counter=0;
    while (scanf("%d", &number) != EOF){
        counter++;
    }
    printf("%d\n", counter);
    return 0;
}