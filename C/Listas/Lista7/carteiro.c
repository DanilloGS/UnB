#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int n, m;
    scanf("%d %d", &n, &m);
    int *numCasa = calloc(n+1, sizeof(int));
    int *rotaCasa = calloc(m+1, sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%ld", &numCasa[i]);
    }
    for (int i = 0; i < m; i++){
        scanf("%ld", &rotaCasa[i]);
    }
    int counter = 0, j = 0;
    for (int i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            
        }
        
    }
    
    return 0;
}
