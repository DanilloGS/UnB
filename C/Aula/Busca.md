# Busca
- Dado um vetor v[0...n-1 e um elemento **x**, encontrar j tal que v[j-1]< x <= v[j]

## 1. Busca sequencial

```
     _________
    |3|5|8|2|7| -> x = 5

    int buscaSequencial(int *v, int n, int x){
        for(int i = 0; i < n; i++){
            if(v[i] == x)
                return i;
        }
        return -1;
    }
    // O(n)
```
- E se o vetor estiver ordenado?
```
    // Só funciona quando o vetor estiver ordenado de forma sequencial
    int buscaSequencial(int *v, int n, int x){
        for(int i = 0; i < n; i++){
            if(v[i] > x)
                break;
            if(v[i] == x)
                return i;
        }
        return -1;
    }
    // O(n-x)
```
- Busca em vetor ordenado otimizada
```
    int buscaBinaria(int *v, int n, int x){
        int e = -1, d = n, m;
        while( e < d-1){
            m = (e+d)/2;
            if(v[m] == x)
                return m;
            if(v[m] < x)
                e = m;
            else
                d = m;
        }
        return -1;
    }
    // O(log n)
```
