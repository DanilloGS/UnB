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
void cleanBuffer();
int main(){
    int numShow, qntBandas;
    struct tipoShow shows[100];
    char nomeShow[80], nome[100];
    puts("Num de shows");
    scanf("%d", &numShow);
    cleanBuffer();  
    for (int i = 0; i < numShow; i++) {
        puts("Nome do evento");
        scanf("%[^\n]", shows[i].nome);
        cleanBuffer();
        puts("Quantidade de bandas");
        scanf("%d", &shows[i].qtd);
        cleanBuffer();
        for (int j = 0; j < shows[i].qtd; j++){
            puts("Nome da banda");
            scanf("%[^\n]", shows[i].bandas[j].nome);
            cleanBuffer();
            puts("Ano que tocou");
            scanf("%d", &shows[i].bandas[j].ano);
            cleanBuffer();            
        }
    }
    puts("Qual banda quer procurar?");
    scanf("%[^\n]", nome);
    cleanBuffer();
    pesquisarNomeBanda(nome, shows, numShow);

    return 0;
}

void pesquisarNomeBanda(char pesquisa[80] , struct tipoShow shows [50] , int n){
    int bool = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < shows[i].qtd; j++){
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
void cleanBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}