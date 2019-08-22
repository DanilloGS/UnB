#include <stdio.h>
int main(){
    int size, space=0, counter=0;
    scanf("%d", &size);
    for (int i = 0; i < size; i++){
        while(space != size-1){
            printf(" ");
            space++;
        }
        for (int j = 0; j <= counter; j++){
            printf("*");
        }
        printf("\n");
        space=i+1;
        counter+=2;
    }
    return 0;
}