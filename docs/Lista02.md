# Lista
        type def struc celula{
            int dado;
            struct celula *prox;
        } celula;

        celula *l = malloc(sizeof(celula));

        int buscaVetor(int v[], int n, int x){
            for(int = 0; i < n; i++){
                if(v[i]==x){
                    return i;
                }
            }
            return -1;
        }

- O custo para inserir um elemento numa lista é constante e é bem mais barato que num vetor, que é linear. Em contrapartidada, acessar um elementonum vetor O(1), enquanto num vetor é O(n).

        int removeVetor(int *v, int n){
            int elem = v[0];
            for(int i=1; i < n; i++){
                v[i-1] = v[i];
            }
            return elem;
        }

        int removeInicioLista(celula *l){
            celula *lixo = l->prox;
            l->prox = lixo->prox;
            int elem = lixo -> dado;
            free(lixo);
            return elem;
        }

        int removeListaN(celula *l, int i){ // i >= 1
            int elem, celula *p = l;
            for(int j = 0; j < i-1 && p != NULL; j++,p = p -> prox);
            if (p != NULL)
                return removeInicoLista(p);
        }