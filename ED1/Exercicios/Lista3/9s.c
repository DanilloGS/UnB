#include <stdio.h>
#include <stdlib.h>

#define true 1
#define SIZE 1001

int rumo9(char *nove, int grau) {
    int sum = 0;
    for (int i = 0; nove[i] != '\0'; i++) sum += ((int)nove[i] - 48);
    if (sum < 9)
        return 0;
    else {
        if (sum == 9) return grau+1;
        else {
            char aux[5];
            sprintf(aux, "%d", sum);
            return rumo9(aux, grau+1);
        }
    } 
}

int main(int argc, char const *argv[]) {
    char *num = malloc(SIZE*sizeof(char));
    while (true) {
        scanf("%s", num);
        if ((int)num[0]-48 == 0) break;
        else {
            int value = rumo9(num, 0);
            if (value) 
                printf("%s is a multiple of 9 and has 9-degree %d.\n", num, value);
            else
                printf("%s is not a multiple of 9.\n", num);
        }
    }
    free(num);
    return 0;
}
