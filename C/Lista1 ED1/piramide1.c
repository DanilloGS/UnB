#include <stdio.h>
int main(){
    int size, print = 0;
    scanf("%d", &size);
    for (int i = 1; i <= size; i++){
        while(print != i){
            print++;
            print == 1 ? printf("%02d", i) : printf(" %02d", i);
        }
        printf("\n");
        print=0;
    }
    printf("\n");
    for (int i = 1; i <= size; i++){
       while(print < i){
           print++;
           print == 1 ? printf("%02d", print) : printf(" %02d", print);
       }
       printf("\n");
       print = 0;
    }
    return 0;
}