#include <stdio.h>
#include <string.h>

struct tipoBanda {
    char nome[80];
    int ano;
};
struct tipoShow {
    char nome[80];
    int qtd;
    struct tipoBanda bandas[100];
};
void pesquisarNomeBanda(char pesquisa[80] , struct tipoShow shows [50] , int n);
int main(){
    int numShow, qntBandas;
    struct tipoShow shows[100];
    char nomeShow[80], nome[100];
    scanf("%d ", &numShow);
    for (int i = 0; i < numShow; i++) {
        scanf("%[\n]", shows[i].nome);
        scanf("%d ", &shows[i].qtd);
        for (int j = 0; j < shows[i].qtd; j++){
            scanf("%[\n]", shows[i].bandas[j].nome);
            scanf("%d ", &shows[i].bandas[j].ano);
        }
    }
    scanf("%[\n]", nome);
    pesquisarNomeBanda(nome, shows, numShow);

    return 0;
}

void pesquisarNomeBanda(char pesquisa[80] , struct tipoShow shows [50] , int n){
    int bool = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < shows[i].qtd; j++){
            printf("BANDAS ========> %s\n", shows[i].bandas[j].nome);
            if (strcmp(shows[i].bandas[j].nome, pesquisa) == 0){
                printf("%s - ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
                bool = 1;
            }
        }
    }
    if (bool == 0){
        printf("Banda nao cadastrada\n");
    }    
} 
