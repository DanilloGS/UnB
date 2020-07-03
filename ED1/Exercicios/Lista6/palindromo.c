#include <stdio.h>
#include <stdlib.h>

int palindromo(char *word, int size) {
    for (int i = 0, j = size-1; i <= size/2 && j >= j/2; i++, j--)
        if (word[i] != word[j]) return 0;
    return 1;
}

int main() {
    int size;
    scanf("%d", &size);
    char *word = malloc((size+1)*sizeof(int));
    scanf("%s", word);
    printf("%d\n", palindromo(word, size));
    return 0;
}
