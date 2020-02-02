#include<stdio.h> 
void printReverse(char *string, int x){
    if (string[x] == '\0')
        printf("\n");
    else {
        printReverse(string, x+1);
        printf("%c", string[x]);
    }
    
}
int main(int argc, char const *argv[])
{
    char word[501];
    scanf("%[^\n]", word);
    printReverse(word, 0);
    return 0;
}
