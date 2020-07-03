# Ordenação
- Função que será utilizada nos códigos
```
    void swap(int *a, int *b) {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
```

## Selection Sort
### Solução Iterativa
```
    void selectionSort(int *v, int n) {
        int menor;
        for(int i = 0; i < n; i++){
            menor = i; 
            for(int j = i; j < n; j++) { 
                if(v[j] < v[menor]) 
                    menor = j;    
            }
            swap(&v[i], &v[menor]);
        }
    }
```
### Solução Recursiva
```
    void selectionSortRec(int *v, int i, int n){
        if(i < n+1){
            int menor;
            for(int j = i; j < n ; j++){
                if(v[j] < v[menor])
                    menor = j;
            }
            swap(&v[i], v[menor]);
            selectionSortRec(v, i+1, n);
        }
     }
```
### Complexidade
- **Melhor caso:** O(n²)
- **Pior caso:** O(n²)

## Insertion Sort
### Solução Iterativa
```
    void insertionSort(int *v, int n) {
        for(int i = 1; i < n; i++) {
            for(int j = i; j > 0 && v[j] < v[j-1]; j--)
                swap(&v[j], &v[j-1]);
        }
    }
```
### Solução Recursiva
```
    void insertionSortRec(int *v, int n, int i) {
        if(i != 0) {
            insertionSortRec(v, n, i-1);
            for(int j = i; j > 0 && v[j] < v[j-1]; j--)
                swap(&v[j], &v[j-1]);
        }
    }
```
### Complexidade
- **Melhor caso:** O(n)
- **Pior caso:** O(n²)

## Bubble Sort
### Solução Iterativa
```
    void bubbleSort(int *v, int n){
        int inversao;
        do {
            inversao = 0;
            for(int i = 1; i < n; i++){
                if(v[i] < v[i-1]){
                    swap(&v[i], &v[i-1]);
                    inversao = 1;
                }
            }
        } while(inversao);
    }
```
### Solução recursiva
```
    void bubbleSortRec(int *v, int n){
        if (n != 0) {
            for (int i = 1; i < n; i++)
                if (v[i] < v[i-1])
                    swap(&v[i], &v[i-1]);
            bubbleSortRec(v, n-1);
        }
    } 
```
### Complexidade
- **Melhor caso:** O(n)
- **Pior caso:** O(n²)

---

## Countig Sort
```
    void countingSort(int *v, int n, int menorNum, int maiorNum) {
        int *aux = calloc(maiorNum - menorNum + 1,sizeof(int)); 
        for(int i = 0; i < n; i++) 
            aux[v[i]-menorNum]++; 
        int j = 0;
        for(int i = 0; i < maiorNum-menorNum+1; i++) 
            while(aux[i]>0) { 
                v[j] = i+menorNum;
                j++;
                aux[i]--;
            }
        free(aux);
    }
```
- **maiorNum:** Maior valor presente no vetor
- **menorNum:** Menor valor presente no vetor
- **n:** Tamanho total do vetor
### Complexidade  
- **Melhor caso:** O(n)
- **Pior Caso:** O(n)

## Radix Sort
### Funções utilizadas no código abaixo
- Pegar o dígito *d* do *num* 
```
    void dig(int num, int d){
        int t1 = pow(10,d);
        int t2 = 10*t1;
        return (num % t2)/t1;
    }
```
- Enfileirar para separar em "Baldes"
```
    void enfileira(fila *f, int x) {
        if (filaCheia(f)) {
            f->N*=2;
            f->dados = realloc(f->dados,f->N*sizeof(int));
        }
        f->dados[f->u] = x;
        f->u++;
    }
```
- Desenfileira para retornar o novo vetor
```
    int desenfileira(fila *f, int *y){
        if(f->p == f->u) 
            return 0;
        *y = f->dados[f->p];
        f->p++;
        return 1;
    }
```
### Solução
```
    void radixSort(int *v, int n, int d){
        for(int i = 0; i < d; i++){
            for(int j = 0; j < n; j++)
                enfileira(v[j], dig(v[j], i));
            for(int j = 0, k = 0; k < 10; k++)
                while(desenfileira(v, k))
                    j++;
        }
    }
```
### Complexidade
- **Melhor caso:** O(n)
- **Pior Caso:** O(n)