#include <stdio.h>
void envelope(int *balas, int *envelopes);
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    envelope(n, k);
    return 0;
}
void envelope(int *balas, int *envelopes){
    int array[1000001]=0, counter = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < N; i++) {
        if (array[i] == K)
            counter += 1;
    }
    printf("%d\n", counter);
}
