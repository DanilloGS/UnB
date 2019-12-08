#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Numero; // Número de aluno (único)
    int NotaFinal; // Nota das final (um valor em {0, …, 20})
} ALUNO;

void swap(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}
void bubbleSort(ALUNO *v, int n)
{
    if (n != 0)
    {
        for (int i = 1; i < n; i++)
            if (v[i].NotaFinal > v[i - 1].NotaFinal)
                swap(&v[i].NotaFinal, &v[i - 1].NotaFinal);
        bubbleSort(v, n - 1);
    }
}

void printLista(ALUNO *v, int n){
    for (int i = 0; i < n; i++){
        printf("%d ", v[i].NotaFinal);
    }
    puts("");
}

int main(int argc, char const *argv[]){
    int count;
    scanf("%d", &count);
    ALUNO *alunos = calloc(count+1, sizeof(ALUNO));    
    for (int i = 0; i < count; i++){
        scanf("%d", &alunos[i].NotaFinal);
    }
    bubbleSort(alunos, count);
    printLista(alunos, count);
    free(alunos);
}
