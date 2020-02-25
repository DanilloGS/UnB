#include <stdio.h>
#include <stdlib.h>
void binSearch(int *array, int x, int n) {
    int e = -1, d = n, m;
    while (e < d-1) {
        m = (d+e)/2;
        if (array[m] < x)
            e = m;
        else
            d = m+1;
    }
    return n+1-d;
}
int main(int argc, char const *argv[]) {
    int c, t, score = 0, reta, shoot[2], max = 0;
    scanf("%d %d", &c, &t);
    int *circle = malloc((c+1)*sizeof(int));
    for (int i = 0; i < c; i++) {
        scanf("%d", &circle[i]);
    }
    while (t) {
        scanf("%d %d", shoot[0], shoot[1]);
        t -=1 ;
    }
    
    return 0;
}
