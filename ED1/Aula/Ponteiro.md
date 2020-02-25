## Ponteiros
- Ponteiros são variáveis que armazenam endereço de memória.
- Como qualquer outra variável ponteiros precisam ser declarados
```
    tipo *ptr;
```
- São utilizados para passagem por referência, alocação dinâmica, definição conceitual de vetores e referência indireta a funções. 
### Tamanhos
```
   #include <stdio.h>
   #include <stdlib.h>
   struct test {
       char a;
       int b;
   };
   int main(int argc, char const *argv[]){
       int array[20];
       struct test teste;
       printf("TAMANHOS\n"
           "\tchar %ld\n"
           "\tshort %ld\n"
           "\tint %ld\n"
           "\tlont int %ld\n"
           "\tfloat %ld\n"
           "\tdouble %ld\n"
           "\tlong double %ld\n"
           "\tarray %ld\n"
           "\tstruct %ld\n",
           sizeof(char), sizeof(short),
           sizeof(int), sizeof(long int),
           sizeof(float), sizeof(double),
           sizeof(long double), sizeof(array),
           sizeof(teste));
       return 0;
   }
```
- Tamanho utilizado por cada tipo de dado em bytes
```
   char 1
   short 2
   int 4
   lont int 8
   float 4
   double 8
   long double 16
   array 80 // Quantidade de espaços alocado vezes o tamanho de um inteiro.
   struct 8
```
#### Como é alocado uma variável
```
   int i;
    _____________________
   |i|i|i|i| | | | | | | |->Foi alocado 4 bytes para a variável i
    0 1 2 3 ........... n
```
- **Obs.:** Se for uma struct o mesmo é arredondado para o maior número divisível por 4. Se o tamanho da struct for 6b o será alocado 8b
### Operandos
- **&:** Representa o endereço de memória de uma variável
```
   scanf("%d", &x);
               |-> Endereço de memória de x (Passagem por referência)   
```
- **_*:_** Para acessar um valor apontado por um ponteiro, usamos o operando de derreferênciamento
```
    #include <stdio.h>
    int main(int argc, char const *argv[])
    {
        int a = 5;
        int *ptr = &a;
        printf("%d\n", sizeof(ptr));// 8 retorna um long int
        return 0;
    }
     _______________________________________
    |a|a|a|a|ptr|ptr|ptr|ptr|ptr|ptr|ptr|ptr|
             -------------------------------
                            |-> Aponta para a
```
### Parâmetros por Referência
- Passagem do endereço da variável para dentro da função mudando os valores que estavam presentes na mesma.
```
   // a = 1, b = 2
   void swap(int *a, int *b){
       int *x;
       *x = *a;
       *a = *b;
       *b = *a;
   }
   // a = 2, b = 1
```
- Percebe-se que os valores que entraram são diferentes dos valores que saíram.
- O mesmo funciona para Strings
```
    void swap(char **a, char **b){
        char *x = *a;
        *a = *b;
        *b = x;
    }
```
### Funções da stdlib.h
- **ptr = malloc(1*sizeof(int))**: Aloca um espaço com lixo de memória;
- **ptr = calloc(1,sizeof(int))**: Aloca um espaço sem lixo de memória;
- **realloc(ptr, 1*sizeof(int))**: Muda o tamanho do espaço alocado. _Usar com moderação;_
- **free(ptr)**: Limpar a memória que foi alocada, _sempre utilizar ao final do código;_
- **NULL:** É uma constante da stdlib.h que representa 0;
- **exit:** É da stdlib.h e encerra retornando o código passado por argumento
  - **EXIT_SUCESS = 0**
  - **exit(EXIT_SUCESS)**
  - **EXIT_FAILURE = 1**
  - **exit(EXIT_FAILURE)**
#### Diferença entre alocação estática e dinâmica
- **Estática:** O SO aloca espaço para variáveis estaticamente declarados assim que o escopo da variável é compilado.
  - O espaço reservado é marcado como disponível assim que o escopo é encerrado(Desalocação).
- **Dinâmica:** Consiste em reservar espaço na memória em tempo de execução.
 
### Aritmética de Ponteiros
```
    #include <stdio.h>
    int main(){
        int a[] = {10,20,30,40,50};
        int *ptr = a;// ou *ptr = &a;
        printf("%d\n", *ptr); // 10
        printf("%d\n", *ptr+1); // 11
        printf("%d\n", *(ptr+1)); // 20
        printf("%d\n", ptr); // Endereço
        return 0;
    }
```  
### Matriz Dinâmica
#### Alocando
```
    int **matriz; // m: linhas, n: colunas
    matriz = malloc(m*sizeof(int*));
    for (int i = 0; i < m; i++) {
        matriz[i]=malloc(n*sizeof(int));
    }
```
#### Desalocando
```
    for (int i = 0; i < m; i++) free(matriz[i]);
    free(matriz);
```