#### Danillo Goncalves de Souza 170139981

## 1.
### Respostas
   > * A) 1004
   > * B) 2
   > * C) 2
   > * D) 1040
### Justificativa
> * As questões 1.A) e 1.D) estão subindo de 4 em 4, pois é o tamanho do dado que está sendo armazenado no endereço que no caso é um número inteiro.E as questões 1.B) e 1.C) está imprimindo o valor que está armazenado no vetor. Tanto na 1.B) e na 1.C) está sendo adicionando um Byte a mais no endereço base do vetor.

## 4. 
### Respostas
> * A) Inválido. Não se pode adicionar mais memória em um vetor com alocação estática.
> * B) Inválido. Não se pode adicionar mais memória em um vetor com alocação estática.
> * C) Inválido. O vetor tem um tamanho imutável.
> * D) Válido. O ponteiro é uma referência à um endereço, é mutável
> * E) Válido. O ponteiro é uma referência à um endereço, é mutável

## 5.
> * A seguinte função imprime uma string, caractere por caractere

## 13.
> * O código não funciona. Pois a função troca string não está funcionando da forma que devia. Para resolver a questão tem que fazer um swap dos endereços de memória, então passase ele direto com "&" e na função utiliza um ponteiro de ponteiro para apontar para o endereço do endereço

        #include <stdio.h>
        #include <string.h>
        void troca_int (int *x, int *y) {
            int tmp;
            tmp = *x;
            *x = *y;
            *y = tmp;
        }
        void troca_str (char **x, char **y) {
            char *tmp;
            tmp = *x;
            *x = *y;
            *y = tmp;
        }
        int main() {
            int a, b;
            char *s1, *s2;
            a = 3;
            b = 4;
            troca_int (&a, &b);
            printf("a is %d\n", A);
            printf("b is %d\n", b);
            s1 = "Eu deveria aparecer depois";
            s2 = "Eu deveria aparecer primeiro";
            troca_str(&s1, &s2);
            printf("s1 is %s\n", s1);
            printf("s2 is %s\n", s2);
            return 0;
        }

## 15. 
        #include <stdio.h>
        #include <stdlib.h>
        #include <string.h>
        char *concat(char *frase1, char *frase2);
        void cleanBuffer();
        int main(int argc, char const *argv[]){
            int tamanhoStr1, tamanhoStr2;
            printf("Qual o tamanho máximo da primeira frase?\n");
            scanf("%d", &tamanhoStr1);
            printf("Qual o tamanho máximo da segunda frase?\n");
            scanf("%d", &tamanhoStr2);

            char *str1= calloc(tamanhoStr1+1, sizeof(char));
            char *str2= calloc(tamanhoStr2+1, sizeof(char));
            
            cleanBuffer();
            scanf("%[^\n]", str1);

            cleanBuffer();    
            scanf("%[^\n]", str2);

            printf("%s\n", concat(str1, str2));
            return 0;
        }

        char *concat(char *frase1, char *frase2){
            return strcat(frase1, frase2);
        }

        void cleanBuffer(){
            char c;
            while ((c = getchar()) != '\n' && c != EOF);
        }