# Básico
## Printf
- O printf possui um retorno que pode ser usado da seguinte forma.
### Código
```
    long int x = 100;
    printf("O valor é ");
    printf(" e possui %d dígitos\n", printf("%ld", x));
    return 0;
```
### Retorno
```
   O valor é 100 e possui 3 dígitos
```
- O mesmo retorna a quatidade de digítos que está sendo imprimido.
## Ponteiros
- Ao declarar uma variável o Sistema Operacional aloca um espaço na memória para a mesma.
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
### Manipulação
```
    int a[] = {10,20,30,40,50};
    int *ptr = a;
    printf("%d\n", *ptr); // 10
    printf("%d\n", *ptr+1); // 11 
    printf("%d\n", *(ptr+1)); // 20 
    printf("%d\n", ptr); // Endereço 
```
### Parâmetros por Valor
- Passagem **Somente** dos valores que estão na main para dentro da função que foi chamada, os valores que foram passados são utilizados dentro da função, mas são imutáveis para a main.
```
    // a = 1, b = 2
    void swap(int a, int b){
        int x;
        x = a;
        a = b;
        b = x;
    }
    // a = 1, b = 2
```
- A função acima não irá funcionar, pois seus valores foram mudados somente dentro da função swap. Os valores serão os mesmos na main.
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
### Alocação dinâmica
- **ptr = malloc(1*sizeof(int))**: Aloca um espaço com lixo de memória.
- **ptr = calloc(1,sizeof(int))**: Aloca um espaço sem lixo de memória.
- **realloc(ptr, 1*sizeof(int))**: Muda o tamanho do espaço alocado. *Usar com moderação.*
- **free(ptr)**: Limpar a memória que foi alocada, *sempre utilizar ao final do código*.