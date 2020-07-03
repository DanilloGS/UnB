#include <stdio.h>
int main()
{
    int paDirecao, pbDirecao,
        pbInitialX, pbInitialY,
        paInitialX = 1, paInitialY = 1,
        moves, bool = 0, saveVar[6], maxX, maxY;
    scanf("%d %d", &pbInitialX, &pbInitialY);
    maxX = pbInitialX;
    maxY = pbInitialY;
    scanf("%d", &moves);
    for (int i = 0; i < moves; i++) {
        scanf("%d %d", &paDirecao, &pbDirecao);
        switch (paDirecao) {
            case 1:
                paInitialY++;
                break;
            case 2:
                paInitialY--;
                break;
            case 3:
                paInitialX++;
                break;
            case 4:
            paInitialX--;
            break;
        }
        switch (pbDirecao) {
            case 1:
                pbInitialY++;
                break;
            case 2:
                pbInitialY--;
                break;
            case 3:
                pbInitialX++;
                break;
            case 4:
            pbInitialX--;
            break;
        }
        if ((((paInitialX < 1) || (paInitialY < 1)) || ((paInitialX > maxX) || (paInitialY > maxY))) && bool == 0) {
            saveVar[0] = paInitialX;
            saveVar[1] = paInitialY;
            saveVar[2] = i + 1;
            bool = 1;
        }
        else if ((((pbInitialX < 1) || (pbInitialY < 1)) || ((pbInitialX > maxX) || (pbInitialY > maxY))) && bool == 0) {
            saveVar[3] = pbInitialX;
            saveVar[4] = pbInitialY;
            saveVar[5] = i + 1;
            bool = 2;
        }
        else if (((paInitialX == pbInitialX) && (paInitialY == pbInitialY)) && bool == 0) {
            saveVar[0] = paInitialX;
            saveVar[1] = paInitialY;
            saveVar[2] = i + 1;
            bool = 3;
        }
    }
    if (bool == 0) {
        printf("Nao se encontraram\n");
    }
    else if (bool == 1) {
        printf("PA saiu na posicao (%d,%d) no passo %d\n", saveVar[0], saveVar[1], saveVar[2]);
    }
    else if (bool == 2) {
        printf("PB saiu na posicao (%d,%d) no passo %d\n", saveVar[3], saveVar[4], saveVar[5]);
    }
    else {
        printf("Encontraram-se na posicao (%d,%d) no passo %d\n", saveVar[0], saveVar[1], saveVar[2]);
    }
    return 0;
}