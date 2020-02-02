# Recursão
- É uma função que chama a si mesma.
- Um problema possui uma estrutura recursiva quando é possível resolvê-lo aplicando a mesma técnica de resolução a uma instância menor e combinando a resolução da mesma com outras para a resolução de problema maior.

```
    int fatorial(int num) {
        if(num == 0)
            return 1;
        else
            return num*fatorial(num-1);
    }
```
## Árvore de Recursão
```
    fatorial(5) = 120
        |->fatorial(4) = 24
            |->fatorial(3) = 6
                  |->fatorial(2) = 2
                        |->fatorial(1) = 1
                              |->fatorial(0) = 1
```