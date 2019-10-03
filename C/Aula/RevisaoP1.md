# Revisão
## Ponteiros
### Aritimética de ponteiros
        
        ptr = ptr+1 // 1004
        ptr = ptr+1+sizeof(tipoPtr) //int, char, doulbe

### Alocação estastica (Automática)

        int x = 5;// 4 bytes

### Dinâmica (Ponteiro)

        int *ptr
        ptr = malloc(sizeof(int));
        // Ao final do código
        free(ptr);

### Passagem por referência

        void trocar(int a, int b){
            int *aux;
            *aux = *a;
            *a = *b;
            *b = *aux;
        }

        // O ponteiro deve ser duplo, pois assim a função só recebe o endereço da primeira posição da string. Quando for chamar a função na main usa-se &
        void trocaString(char **str1, char **str2){
            char **aux;
            *aux = *str1;
            *str1 = *str2;
            *str2 = *aux;
        }

## Recursão 
- Caso base
- Cominação de soluções
### Caracteristicas recursivas
- Resolver um problema equivale à resoluçãode uma instância menor do mesmo problema 
    - Pilha do sistema
    - Árvore de recursão

- **_Exemplo:_** **Inverter uma string**

        // Recursão
        void inverterStr(char str[], int i){
            if(str[i]=="\0"){
                printf("\n");
                return;
            }
            else{
                inverterStr(str[i], i++);
                printf("%c",str[i]);
            }
        }