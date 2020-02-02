#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int coluna;
    int dado;
    struct Node *prox;
} Node;

typedef struct Matriz
{
    int linhas;  //m
    int colunas; //n
    Node **valores;
} Matriz;

void inicializa(int linhas, int colunas, Matriz **m)
{
    (*m)->linhas = linhas;
    (*m)->colunas = colunas;
    (*m)->valores = malloc(linhas * sizeof(Node *));
    for (int i = 0; i < linhas; i++)
    {   
        (*m)->valores[i] = malloc(sizeof(Node));
        (*m)->valores[i]->prox = NULL;
    }
}

void inserir(int linha, int coluna, int dado, Matriz **m, int *array, int *resultado)
{
    Node *anterior = (*m)->valores[linha];
    Node *novo = malloc(sizeof(Node));
    novo->coluna = coluna;
    novo->dado = dado;
    novo->prox = anterior->prox;
    anterior->prox = novo; 
    resultado[linha] += dado*array[coluna];
}

int main()
{
    int linha, coluna, valorAdicionado;

    Matriz *m;
    m = malloc(sizeof(Matriz));

    scanf("%d %d", &linha, &coluna);

    inicializa(linha, coluna, &m);

    int *array = malloc(coluna*sizeof(int));
    int *resultado = malloc(coluna*sizeof(int));

    for (int i = 0; i < coluna; i++)
        scanf("%d", &array[i]);

    while (scanf("%d %d %d", &linha, &coluna, &valorAdicionado) != EOF)
        inserir(linha, coluna, valorAdicionado, &m, array, resultado);

    for (int i = 0; i < m->linhas; i++)
    {
        printf("%d\n", resultado[i]);
    }
    
    free(m);
    free(array);
    free(resultado);

    return 0;
}
