#include <stdio.h>
int main(){
    // 1(Norte), 2(Sul), 3(Leste)e 4(Oeste)
    int paDirecao, pbDirecao,
        pbInitialX, pbInitialY,
        paInitialX = 1, paInitialY = 1,
        moves, bool = 0, saveVar[3];
    scanf("%d %d", &pbInitialX, &pbInitialY);
    scanf("%d", &moves);
    for (int i = 0; i < moves; i++){
        scanf("%d %d", &paDirecao, &pbDirecao);
        switch (paDirecao){
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
        switch (pbDirecao){
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
        if (((paInitialX < 1) || (paInitialY < 1)) && bool == 0){
            saveVar[0] = paInitialX;
            saveVar[1] = paInitialY;
            saveVar[2] = i+1;
            bool+=1;
        }
        else if (((paInitialX < 1) || (paInitialY < 1)) && bool == 0)
        {
            saveVar[0] = paInitialX;
            saveVar[1] = paInitialY;
            saveVar[2] = i + 1;
            bool+=3;
        }
    }
    if (bool == 0){
        printf("Nao se encontraram\n");
    }
    else if(bool == 1 || bool == 4){
        printf("PA saiu na posicao (%d,%d) no passo %d\n", saveVar[0], saveVar[1], saveVar[2]);
    }
    else if (bool == 3) {
        printf("PB saiu na posicao (%d,%d) no passo %d\n", saveVar[0], saveVar[1], saveVar[2]);
    }
    else{
        printf("Encontraram-se na posicao (%d,%d) no passo %d\n", saveVar[0], saveVar[1], saveVar[2]);
    }
    return 0;
}