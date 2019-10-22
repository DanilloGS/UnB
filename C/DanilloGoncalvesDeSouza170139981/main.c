#include <stdio.h>
int main(int argc, char const *argv[]){
    while(1){
        char bool = 0;
        printf("1. Inserir n elementos na fila.\n"
               "2. Remover n elementos na fila.\n"
               "3. Imprimir a fila.\n"
               "4. Reiniciar a fila.\n"
               "5. Sair.\n");
        scanf("%c", &bool);
        if(bool == '1'){
            printf("Quantos elementos gostaria de inseriar na fila?\n");
            int n = 0;
            scanf("%d", &n);
            // Inserir n elementos
        }
        else if (bool == '2'){
            printf("Quantos elementos gostaria de remover da fila?\n");
            // Remover n elementos na fila.
        }
        else if (bool == '3'){
            // Imprimir a fila.
        }
        else if (bool == '4'){
            // Reiniciar a fila.
            // E criar uma nova
        }
        else if (bool == '5'){
            break;
        }
        else {
            printf("Opção não existente, tente novamente\n");
        }        
    }
    return 0;
}
