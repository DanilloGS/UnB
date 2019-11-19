#include <stdio.h>
#include <string.h>
int divideNove(char *num, int count);
int main(int argc, char const *argv[])
{
    while (1){
        char nineStr[1001];
        int resposta;
        scanf("%s", nineStr);
        if ((int)nineStr[0] - 48 == 0)
            break;
        resposta = divideNove(nineStr, 0);
        if (resposta == -1){
            printf("%s is not a multiple of 9.\n", nineStr);
        }
        else{
            printf("%s is a multiple of 9 and has 9-degree %d.\n", nineStr, resposta+1);
        }
    }
    return 0;
}
int divideNove(char *num, int count)
{
    int dividendo = 0;
    for (int i = 0; num[i] != '\0'; i++)
    {
        dividendo += ((int)num[i] - 48);
    }
    if (dividendo > 9)
    {
        char tmp[1001];
        sprintf(tmp, "%d", dividendo);
        return divideNove(tmp, count + 1);
    }
    else if (dividendo < 9)
    {
        return -1;
    }
    else
    {
        return count;
    }
}