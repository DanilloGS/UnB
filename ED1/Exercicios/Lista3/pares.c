#include<stdio.h>

int pair(char *word, int position, int total) {
    if (word[position]=='\0') 
        return total;
    else {
        if (word[position+2]=='\0')
            return total;
        else if (word[position]==word[position+2])
            return pair(word, position+1, total+1);
        else
            return pair(word, position+1, total);
    }
}

int main() {
    char word[201];
    scanf("%s", word);
    printf("%d\n", pair(word, 0, 0));
    return 0;
}
