#include <stdio.h>
int f91(int n){
    if (n > 100){
        return n-10;
    }
    else {
        return f91(f91(n+11)); 
    }    
}
int main(int argc, char const *argv[]){
    int number;
    while(1){
        scanf("%d", &number);
        if (number == 0)
            break;
        printf("f91 (%d) = %d\n", number,f91(number));
    } 
    return 0;
}
