#include <stdio.h>
double calculaVelocidadeMedia(int tA, int tB, double distancia);
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima);
int main(){
    int tempoA, tempoB;
    double dist, velocidadeMax;
    scanf("%d %d", &tempoA, &tempoB);
    scanf("%lf %lf", &dist, &velocidadeMax);
    printf("%lf\n", calculaVelocidadeMedia(tempoA, tempoB, dist));
    printf("%lf\n", levouMulta(tempoA, tempoB, dist, velocidadeMax));
    return 0;
}

double calculaVelocidadeMedia(int tA, int tB, double distancia){
    return distancia/((tB-tA)/3600.0);    
}
int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
    if (calculaVelocidadeMedia(tA, tB, distancia) > velocidadeMaxima)
        return 1;
    else
        return 0;
}