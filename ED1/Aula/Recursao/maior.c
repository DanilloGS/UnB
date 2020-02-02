#include <stdio.h>
int maior(int *v, int n){
    if (n == 1)
        return *v;
    else{
        int elem = maior(v, n-1);
        if (v[n-1] > elem) return v[n-1];
        return elem;
    }
}
int main(){
    int v[10] = {3, 5, 1, 2, 7, 8, 7, 9, 1012, 4}; 
    printf("%d\n", maior(v, 10));
    return 0;
}

