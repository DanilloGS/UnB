#include <stdio.h>
#include <stdlib.h>
#include "vetorTamanhoFixo.h"
// #include "circularRedimensionamento.h"
// #include "listaEncadeadaCircular.h"

void cleanBuffer();
int main(){
    Queue *f = NULL;
    f = newQueue(f); 
    while(1){
        char bool;
        printf("\n1. Inserir n elementos na fila.\n"
               "2. Remover n elementos na fila.\n"
               "3. Imprimir a fila.\n"
               "4. Reiniciar a fila.\n"
               "5. Sair.\n");
        scanf("%c", &bool);
        cleanBuffer();
        if(bool == '1'){
            printf("\nQuantos elementos gostaria de inseriar na fila?\n");
            int count = 0, fit = 0, valueOnQueue;
            scanf(" %d", &count);
            for (int i = 0; i < count; i++){
                scanf("%d", &valueOnQueue);
                if (queueFull(f)==0){
                    f = insert(f, valueOnQueue);
                    fit++;
                }               
            }
            if(fit>0)
                printf("\nTotal de elementos inseridos na fila: %d\n"
                       "Total de elementos que não couberam na fila: %d\n", fit, count-fit);
            else
                printf("\nTodos os elementos foram inseridos na fila\n");
            printf("Tamanho atual da fila: %d\n",queueSize(f));
            cleanBuffer();        
        }
        else if (bool == '2'){
            printf("\nQuantos elementos gostaria de remover da fila?\n");
            int count = 0;
            scanf("%d", &count);
            for (int i = 0; i < count; i++){
                if(queueEmpty(f)){
                    printf("\nA fila esta vazia\n");
                    break;
                }
                else{
                    removeOne(&f);
                    printf("Tamanho atual da fila: %d\n",queueSize(f));
                }
            }
            cleanBuffer();        
        }
        else if (bool == '3'){  
            printf("\n");
            if(queueEmpty(f) == 1)
                printf("\nA fila esta Vazia\n");
            else{
                printf("|");
                printQueue(f);
            }
            printf("\n");
        }
        else if (bool == '4'){
            free(f);
            f = newQueue(f);
        }
        else if (bool == '5'){
            free(f);
            break;
        }
        else {
            printf("\nOpção não existente, tente novamente\n");
        }        
    }
    return 0;
}
void cleanBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}