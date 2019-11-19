# Algoritimos de ordenação
```
              Não ordenado                 Ordenado
             _____________              _____________ 
            |9|0|7|2|5|1|8|     ->     |0|1|2|5|7|8|9| 
```
- **Objetivo**: Ordenar um conjunto de dados.
#### Função swap que será utilizada nos códigos. 
```
     void swap(int *a, int *b){
        int aux = *a;
        *a = *b;
        *b = aux;
    }
```

---
## Selection Sort
```
    void selectionSort(int *v, int n){
        int menor;
        for(int i = 0; i < n; i++){
            menor = i;            
            // Procurar i-ésimo menor elemento
            for(int j = i; j < n; j++){ 
                if(v[j] < v[menor]) 
                    menor = j;    
            }
            swap(&v[i], &v[menor]);
        }
    }
```
### Solução Recursiva
```
    // i == 0 na main
    void selectionSortRec(int *v, int i, int n){
        if(i < n+1){
            int menor;
            for(int j = i; ; j++){
                if(v[j] < v[menor])
                    menor = j;
            }
            swap(&v[i], v[menor]);
            selectionSortRec(v, i+1, n);
        }
     }
```
### Complexidade
- **Melhor caso**: O(n²)
- **Pior caso**: O(n²)

---
## Insertion Sort
```
    void insertionSort(int *v, int n){
        for(int i=0; i < n; i++){
            int j = i-1;
            while(j>=0 && v[j] < v[i]){
                swap(&v[j], &v[j-1]);
                j--;
            }
        }
    }
```
### Solução recursiva
```
    void insertionSortRec( int *v, int n ){
        if( n>0 ){
            insertionSortRec(v, n-1);
            int j = n;
            while( j >= i && v[j] < v[j-1]){
                swap(&v[j], &v[j-1]);
                j--;
            }
        }
    }
```
### Complexidade
- **Melhor caso**: O(n)
- **Pior caso**: O(n²)

---
## Bubble Sort
```
    void bubbleSort(*v, int n){
        int inversao;
        do {
            inversao = 0;
            for(int i = 1; i < n; i++){
                if(v[i] < v[i-1]){
                    swap(&v[i], &v[i-1]);
                    inversao = 1;
                }
            }
        } while(inversao)
    }
```

---
## Ordenação de contagem

### Premissa
- Os dados a serem ordenados estão contidos num intervalo (Diagrams de **O** a **m**)

- Entrada
  - Vetor com n elementos
- Auxiliar
  - Vetor de n posições

1 - Zera as posições do vetor Auxiliar

2 - Para cada ocorrência de **i** em **v**, incrementa-se aux[i].

3 - Sobrescreve-se o vetor baseado na contagem

```
    void ordContagem(int *v, int n, int a, int b){
        int *aux = calloc(b->,sizeof(int));
        for(int i = 0; i < n; i++)
            aux[v[i]-a]++; // Conta ocorrência de cada elemento v
        for(int i = 0, j = 0; i < b-a+1; i++){
                while(aux[i]>0){
                v[j] = i+a;
                j++;
                aux[i]--; // Constante depende de b-a
            }
        }
        free(aux);
    }
```
**Obs.:** Como a constante que multiplica n na complexidade depende de  _b-a_, se o intervalo [a,b] for muito grande, o algoritimo de ordenação por contagem pode ser pior que algum O(n²).

**Ex.:** Ordenar um vetor de 100 elementos variando de 0 a 2 bilhões.
- Custo de um O(n²) = 100² = 10⁴
- Custo de produção por = 2 * 10³ * 100 = 10⁴ 

---

## Ordenação por distribuição

```
    |38|63|90|42|37|10|84|18|55|77|65|13|

    |90|10|42|63|13|84|55|65|37|77|38|18| - 1⁰ dígito(Dígito da direita)

    |10|13|18|37|38|41|55|63|65|77|84|90| - 2⁰ dígito (Dígito da esquerda)

```
- d passos (Número de dígitos)
  - 0 até 9 = 10 percorridadas no vetor = 10 * d * n = O(n) 

```
    void ordSistribuicao(char **v, int n, int d){
        for(int i = d-1; i >= 0; i--){
            for(int j = 0, l = 0; j < 10; j++){
                for(int k = 0; k < n; k++){
                    if(v[k][i]-'0'==j){
                        troca(v, k, l);
                        l++;
                    }
                }
            }
        }
    }

    troca(char **v, int k, int l, int d){
        char *aux = malloc(d*sizeof(char));
        strcpy(aux, v[k]);
        strcpy(v[k], v[l]);
        strcpy(v[l], aux);
        free(aux);
    }
```
